import numpy as np
cimport numpy as np

cdef extern from 'axial_rotation_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_9200708909766654871)


cdef extern from 'axial_rotation_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_7014522437824047266)


cdef extern from 'axial_rotation_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_5102482807297750114)


cdef extern from 'axial_rotation_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_8096524435884101326)


cdef extern from 'axial_rotation_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_3998820253396051815)


cdef extern from 'axial_rotation_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_5094784770336120684)


cdef extern from 'axial_rotation_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_717923672618744582)


cdef extern from 'axial_rotation_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_916882218690419277)


cdef extern from 'axial_rotation_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_8073843821567953197)


cdef extern from 'axial_rotation_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_4700664725481397494)


cdef extern from 'axial_rotation_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_7553378290115549964)


cdef extern from 'axial_rotation_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_2252414762231217087)


cdef extern from 'axial_rotation_constraint_code.h':
    int len_model_parameters()


cdef extern from 'axial_rotation_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_9200708909766654871 = np.empty((5,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_9200708909766654871.data)
    return out_9200708909766654871
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_7014522437824047266 = np.empty((2,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_7014522437824047266.data)
    return out_7014522437824047266
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_5102482807297750114 = np.empty((5,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_5102482807297750114.data)
    return out_5102482807297750114
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_8096524435884101326 = np.empty((1,11))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_8096524435884101326.data)
    return out_8096524435884101326
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_3998820253396051815 = np.empty((1,11))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_3998820253396051815.data)
    return out_3998820253396051815
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_5094784770336120684 = np.empty((1,11))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_5094784770336120684.data)
    return out_5094784770336120684
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_717923672618744582 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_717923672618744582.data)
    return out_717923672618744582
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_916882218690419277 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_916882218690419277.data)
    return out_916882218690419277
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_8073843821567953197 = np.empty((1,11))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_8073843821567953197.data)
    return out_8073843821567953197
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_4700664725481397494 = np.empty((1,11))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_4700664725481397494.data)
    return out_4700664725481397494
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_7553378290115549964 = np.empty((1,5))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_7553378290115549964.data)
    return out_7553378290115549964
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_2252414762231217087 = np.empty((1,5))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_2252414762231217087.data)
    return out_2252414762231217087
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()