import numpy as np
cimport numpy as np

cdef extern from 'point_on_line_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_2080622303644944647)


cdef extern from 'point_on_line_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_2322051777240035972)


cdef extern from 'point_on_line_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_8840014917120631631)


cdef extern from 'point_on_line_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_4975867137388042242)


cdef extern from 'point_on_line_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_4875554498147857436)


cdef extern from 'point_on_line_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_2546326453788600809)


cdef extern from 'point_on_line_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_4827245986571033722)


cdef extern from 'point_on_line_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_8137630954582495272)


cdef extern from 'point_on_line_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_7447870788275132188)


cdef extern from 'point_on_line_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_4245371547242499336)


cdef extern from 'point_on_line_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_9028698567081602445)


cdef extern from 'point_on_line_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy, double *out_5768813360362300063)


cdef extern from 'point_on_line_constraint_code.h':
    int len_model_parameters()


cdef extern from 'point_on_line_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2080622303644944647 = np.empty((2,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_2080622303644944647.data)
    return out_2080622303644944647
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_8840014917120631631 = np.empty((2,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_8840014917120631631.data)
    return out_8840014917120631631
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4975867137388042242 = np.empty((1,7))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_4975867137388042242.data)
    return out_4975867137388042242
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4875554498147857436 = np.empty((1,7))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_4875554498147857436.data)
    return out_4875554498147857436
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2546326453788600809 = np.empty((1,7))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_2546326453788600809.data)
    return out_2546326453788600809
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4827245986571033722 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_4827245986571033722.data)
    return out_4827245986571033722
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_8137630954582495272 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_8137630954582495272.data)
    return out_8137630954582495272
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_7447870788275132188 = np.empty((1,7))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_7447870788275132188.data)
    return out_7447870788275132188
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4245371547242499336 = np.empty((1,7))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_4245371547242499336.data)
    return out_4245371547242499336
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_9028698567081602445 = np.empty((1,2))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_9028698567081602445.data)
    return out_9028698567081602445
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_5768813360362300063 = np.empty((1,2))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, dx, dy, <double*> out_5768813360362300063.data)
    return out_5768813360362300063
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()