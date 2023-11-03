import numpy as np
cimport numpy as np

cdef extern from 'axial_rotation_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_2153144193735755220)


cdef extern from 'axial_rotation_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_2716556446263938911)


cdef extern from 'axial_rotation_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_8775355729587181476)


cdef extern from 'axial_rotation_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_7390207150434362007)


cdef extern from 'axial_rotation_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_7723403493051822654)


cdef extern from 'axial_rotation_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_700580731888823677)


cdef extern from 'axial_rotation_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_6548265996073996887)


cdef extern from 'axial_rotation_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_92360488293920429)


cdef extern from 'axial_rotation_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_2782664182512977814)


cdef extern from 'axial_rotation_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_5439269182171221463)


cdef extern from 'axial_rotation_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_4995133906294737771)


cdef extern from 'axial_rotation_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_2612937343459089108)


cdef extern from 'axial_rotation_constraint_code.h':
    int len_model_parameters()


cdef extern from 'axial_rotation_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_2153144193735755220 = np.empty((5,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_2153144193735755220.data)
    return out_2153144193735755220
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_2716556446263938911 = np.empty((2,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_2716556446263938911.data)
    return out_2716556446263938911
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_8775355729587181476 = np.empty((5,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_8775355729587181476.data)
    return out_8775355729587181476
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_7390207150434362007 = np.empty((1,11))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_7390207150434362007.data)
    return out_7390207150434362007
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_7723403493051822654 = np.empty((1,11))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_7723403493051822654.data)
    return out_7723403493051822654
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_700580731888823677 = np.empty((1,11))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_700580731888823677.data)
    return out_700580731888823677
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_6548265996073996887 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_6548265996073996887.data)
    return out_6548265996073996887
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_92360488293920429 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_92360488293920429.data)
    return out_92360488293920429
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_2782664182512977814 = np.empty((1,11))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_2782664182512977814.data)
    return out_2782664182512977814
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_5439269182171221463 = np.empty((1,11))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_5439269182171221463.data)
    return out_5439269182171221463
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_4995133906294737771 = np.empty((1,5))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_4995133906294737771.data)
    return out_4995133906294737771
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz):

    cdef np.ndarray[np.double_t, ndim=2] out_2612937343459089108 = np.empty((1,5))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, dz, <double*> out_2612937343459089108.data)
    return out_2612937343459089108
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()