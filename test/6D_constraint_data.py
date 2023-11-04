import numpy as np
import pytransform3d.rotations as py3d_rot
import pytransform3d.transformations as py3d_transform
from pytransform3d.trajectories import pqs_from_transforms
from pytransform3d.batch_rotations import batch_quaternion_xyzw_from_wxyz

from contact_lfd.LfDusingEC.utils.utils_robotMath import TransInv, align_unit_vectors, Adjoint_from_matrix, \
    RtToTrans, orthogonal_project, angle_between, computer_direction_from_PCA, uniform_sample_vectors_on_a_plane, \
    get_vector_from_theta_phi, get_theta_phi

from constraint_recognition.fit_constraints_tools.fit_constraints import ConstraintProcessing, InputData
import constraint_recognition.origin_on_line_constraint.origin_on_line_constraint as relaxed_prismatic
import constraint_recognition.origin_on_arc_constraint.origin_on_arc_constraint as relaxed_revolute
import constraint_recognition.planar_constraint.planar_constraint as planar_constraint_fitter
import constraint_recognition.axial_rotation_constraint.axial_rotation_constraint as revolute

np.set_printoptions(precision=2)


def prismatic_trajectory(prismatic_parameters, start_pose_SE3, T, dt):
    """
    @param prismatic_parameters: [azi, ele, p, dp], prismatic axis orientation and position and velocity along the
                                 orientation
    @param start_pose_SE3: start pose
    @param T: completion time
    @param dt: sample unit
    @return: trajectory consists of a series of waypoints
    """
    trajectory_SE3 = start_pose_SE3.reshape(1, 4, 4)  # first dimension is the number of waypoints
    init_SE3 = start_pose_SE3
    # convert
    for j in range(0, int(T / dt)):
        prismatic_parameters[2] = prismatic_parameters[2] + prismatic_parameters[3]*dt
        incremental_translation = prismatic_parameters[2] * \
                                  get_vector_from_theta_phi(prismatic_parameters[0], prismatic_parameters[1])
        incremental_SE3 = np.eye(4)
        incremental_SE3[:3, 3] = incremental_translation
        new_SE3 = init_SE3 @ incremental_SE3
        trajectory_SE3 = np.concatenate([trajectory_SE3, new_SE3.reshape(1, 4, 4)])
    return trajectory_SE3


def revolute_trajectory(rev_parameters, start_pose_SE3, T, dt):
    """
    @param rev_parameters: [azi, ele, rotation_center_point(x, y, z), p, dp], rotation axis orientation and position and velocity along the
                                 orientation
    @param start_pose_SE3: start pose
    @param T: completion time
    @param dt: sample unit
    @return: trajectory consists of a series of waypoints
    """
    trajectory_SE3 = start_pose_SE3.reshape(1, 4, 4)  # first dimension is the number of waypoints
    init_SE3 = start_pose_SE3

    # convert
    for j in range(0, int(T / dt)):
        rev_parameters[-2] = rev_parameters[-2] + rev_parameters[-1]*dt
        rev_axis = get_vector_from_theta_phi(rev_parameters[0], rev_parameters[1])
        rev_center_position = rev_parameters[2:5]
        r_state = rev_parameters[-2]
        incremental_rotation_se3 = r_state * rev_axis
        incremental_translation_se3 = np.cross(-r_state * rev_axis, rev_center_position)
        ee_delta_SE3_ee = py3d_transform.transform_from_exponential_coordinates(np.append(incremental_rotation_se3,
                                                                                          incremental_translation_se3))
        new_SE3 = init_SE3 @ ee_delta_SE3_ee
        trajectory_SE3 = np.concatenate([trajectory_SE3, new_SE3.reshape(1, 4, 4)])
    return trajectory_SE3


def construct_input_data(traj_SE3):
    # construct input data
    traj_pqs_obj_frame = pqs_from_transforms(traj_SE3)
    # here we only test the revolute joints
    p = traj_pqs_obj_frame[:, :3]
    q = batch_quaternion_xyzw_from_wxyz(traj_pqs_obj_frame[:, 3:])
    A = np.tile(np.identity(3), (p.shape[0], 1, 1))
    v = np.zeros_like(p)
    w = np.zeros_like(p)
    f = np.zeros_like(p)
    tau = np.zeros_like(p)
    input_data = InputData(p, q, A, v, w, f, tau)
    return input_data


def prismatic_learner(input_data):
    pscProc = ConstraintProcessing(relaxed_prismatic, include_velocities=False)
    pris_result = pscProc.constraint_robust_lsq(input_data, iterations=10)
    pris_param = pris_result[1]
    base_R_constraint = py3d_rot.matrix_from_compact_axis_angle(np.append(pris_param[:2], 0))
    base_prismatic_origin = base_R_constraint @ np.append(pris_param[2:], 0)
    base_prismatic_direction = base_R_constraint @ np.array([0, 0, 1])
    print("Pris axis direction is {}".format(base_prismatic_direction))
    print("Pris origin is {}".format(base_prismatic_origin))
    return base_prismatic_direction, base_prismatic_origin


def revolute_learner(input_data):
    arcProc = ConstraintProcessing(relaxed_revolute, include_velocities=False)
    # wx_line, wy_line, d, cx, cy, cz, R
    rev_result = arcProc.constraint_robust_lsq(input_data, iterations=30)
    rev_param = rev_result[1]
    base_R_constraint = py3d_rot.matrix_from_compact_axis_angle(np.append(rev_param[:2], 0))
    rev_axis_direction = base_R_constraint @ np.array([0, 0, 1])
    l = rev_param[-1]
    r_center_point = rev_param[3:6]
    print("Rev axis direction is {}".format(rev_axis_direction))
    print("Radius is {}".format(l))
    print("Revolute center is {}".format(r_center_point))

    return rev_axis_direction, r_center_point, l


def complex_rev_learner(input_data):
    arc_strict_Proc = ConstraintProcessing(revolute, include_velocities=False)
    rev_result = arc_strict_Proc.constraint_robust_lsq(input_data, iterations=20)
    rev_param = rev_result[1]
    w = rev_param[6:8]
    constraint_R_base = py3d_rot.matrix_from_compact_axis_angle(np.append(w, 0))
    rev_axis_direction = constraint_R_base.T @ np.array([0, 0, 1])
    r_center_point = rev_param[8:11]
    print("Rev axis direction is {}".format(rev_axis_direction))
    print("Revolute center is {}".format(r_center_point))
    return rev_axis_direction, r_center_point


# Now generate a prismatic movement!
num_waypoints = 100
init_base_ht_ee = np.eye(4, 4)
init_base_ht_ee[:3, 3] = [1, 3, 4]

# generate prismatic joint trajectory
prismatic_direction = np.array([1, 1, 100])
prismatic_direction = prismatic_direction/np.linalg.norm(prismatic_direction)
prismatic_param = np.append(np.array(get_theta_phi(prismatic_direction)), [0, 0.05])
pris_base_ht_ee = prismatic_trajectory(prismatic_param, start_pose_SE3=init_base_ht_ee, T=1, dt=0.05)

# generate revolute joint trajectory
rev_axis_direction = np.array([1, 1, 0])
rev_axis_direction = rev_axis_direction/np.linalg.norm(rev_axis_direction)
rev_center_point_and_state_vel = [0, 0, 3, 0, 0.5]
rev_param = np.append(np.array(get_theta_phi(rev_axis_direction)), rev_center_point_and_state_vel)
rev_base_ht_ee = revolute_trajectory(rev_param, start_pose_SE3=init_base_ht_ee, T=1, dt=0.05)

# construct input data
input_data = construct_input_data(traj_SE3=pris_base_ht_ee)

pris_result = prismatic_learner(input_data)
# rev_result = revolute_learner(input_data)

print("debug")

