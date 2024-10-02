import numpy as np
cimport numpy as np

cdef extern from 'point_on_plane_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_6398892228666582394)


cdef extern from 'point_on_plane_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_7436422419839965114)


cdef extern from 'point_on_plane_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1204835457161125840)


cdef extern from 'point_on_plane_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_3102138035215914658)


cdef extern from 'point_on_plane_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_7791171843121706201)


cdef extern from 'point_on_plane_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_8876626899607833144)


cdef extern from 'point_on_plane_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_5891048571006344098)


cdef extern from 'point_on_plane_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_5679875994214086678)


cdef extern from 'point_on_plane_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_4214135945349789815)


cdef extern from 'point_on_plane_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_4791479620227737741)


cdef extern from 'point_on_plane_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_3491412123891180923)


cdef extern from 'point_on_plane_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1664543477457624291)


cdef extern from 'point_on_plane_constraint_code.h':
    int len_model_parameters()


cdef extern from 'point_on_plane_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_6398892228666582394 = np.empty((1,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_6398892228666582394.data)
    return out_6398892228666582394
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7436422419839965114 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_7436422419839965114.data)
    return out_7436422419839965114
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1204835457161125840 = np.empty((1,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_1204835457161125840.data)
    return out_1204835457161125840
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_3102138035215914658 = np.empty((1,6))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_3102138035215914658.data)
    return out_3102138035215914658
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7791171843121706201 = np.empty((1,6))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_7791171843121706201.data)
    return out_7791171843121706201
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_8876626899607833144 = np.empty((1,6))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_8876626899607833144.data)
    return out_8876626899607833144
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_5891048571006344098 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_5891048571006344098.data)
    return out_5891048571006344098
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_5679875994214086678 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_5679875994214086678.data)
    return out_5679875994214086678
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_4214135945349789815 = np.empty((1,6))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_4214135945349789815.data)
    return out_4214135945349789815
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_4791479620227737741 = np.empty((1,6))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_4791479620227737741.data)
    return out_4791479620227737741
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_3491412123891180923 = np.empty((1,1))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_3491412123891180923.data)
    return out_3491412123891180923
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1664543477457624291 = np.empty((1,1))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_1664543477457624291.data)
    return out_1664543477457624291
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()