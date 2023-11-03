from fit_constraints.fit_constraints import ConstraintProcessing, InputData
import point_contact_constraint.point_contact_constraint as pcc
import prismatic_constraint.prismatic_constraint as prismatic_constraint_fitter
import axial_rotation_constraint.axial_rotation_constraint as revolute_constraint_fitter
import planar_constraint.planar_constraint as planar_constraint_fitter
import numpy as np
from contact_lfd.LfDusingEC.scripts.data_loader import DemoDataLoader
from contact_lfd.LfDusingEC.vis.base_plot_funcs import plot_demonstration_position, plot_demonstration_velocity, \
    plot_demonstration_force, plot_demonstration_perp_force
import os
import rospkg
import yaml
from pytransform3d.trajectories import pqs_from_transforms
from pytransform3d.batch_rotations import batch_quaternion_xyzw_from_wxyz

pkg_path = rospkg.RosPack().get_path('contact_lfd')
clfd_config_path = os.path.join(pkg_path, 'src/contact_lfd/CLfD/config/config_coffee_machine.yaml')
clfd_config = yaml.safe_load(open(clfd_config_path, "r"))
included_config_path = clfd_config["include"]
included_config_path = os.path.join(pkg_path, included_config_path)
config = yaml.safe_load(open(included_config_path, "r"))
config.update(clfd_config)

dataloader = DemoDataLoader(config, load_data=True, filtering=False, load_pkl=True, exp_name_from_ros=False)
# calculate motion force patterns (e.g. perpendicular forces in object frame) from demonstrations
filtered_seg_demonstration = dataloader.get_motion_force_patterns_for_each_demo(cut_off_rate=10,
                                                                                min_dist_threshold=0.0005,
                                                                                min_ori_threshold=0.005)
# merge segmented demonstrations
filtered_demonstration = dataloader.merge_seg_motion_force_patterns_for_each_demo(filtered_seg_demonstration)

# we use the third demonstration
demo_index = 1
filtered_data = filtered_demonstration[demo_index]

plot_demonstration_position(data=filtered_data, frame="obj")
plot_demonstration_velocity(data=filtered_data, frame="obj")
plot_demonstration_force(data=filtered_data, frame="obj")
plot_demonstration_perp_force(data=filtered_data)

base_ht_ee_traj = filtered_data["base_ht_ee"]
# here we only test the revolute joints
revolute_base_ht_ee = base_ht_ee_traj[179:]
traj_pqs_obj_frame = pqs_from_transforms(revolute_base_ht_ee)
p = traj_pqs_obj_frame[:, :3]
q = batch_quaternion_xyzw_from_wxyz(traj_pqs_obj_frame[:, 3:])
A = np.tile(np.identity(3), (p.shape[0], 1, 1))
v = np.zeros_like(p)
w = np.zeros_like(p)
f = np.zeros_like(p)
tau = np.zeros_like(p)

id = InputData(p, q, A, v, w, f, tau)

pscProc = ConstraintProcessing(prismatic_constraint_fitter, include_velocities=False)
arcProc = ConstraintProcessing(revolute_constraint_fitter, include_velocities=False)

pris_result = pscProc.constraint_robust_lsq(id, iterations=10)
rev_result = arcProc.constraint_robust_lsq(id, iterations=10)
print(pris_result)
print(rev_result)

print("debug")

