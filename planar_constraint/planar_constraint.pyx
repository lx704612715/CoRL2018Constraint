import numpy as np
cimport numpy as np

cdef extern from 'planar_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_7136718753491164025)


cdef extern from 'planar_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2322432977313704027)


cdef extern from 'planar_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_3589408009681196228)


cdef extern from 'planar_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2004435374870575889)


cdef extern from 'planar_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2206741638912068342)


cdef extern from 'planar_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_3791164168042338662)


cdef extern from 'planar_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_4915780725141845155)


cdef extern from 'planar_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_795651932216339502)


cdef extern from 'planar_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2372189086250648796)


cdef extern from 'planar_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1120808833313391499)


cdef extern from 'planar_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1161741101984001572)


cdef extern from 'planar_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1118820089705171044)


cdef extern from 'planar_constraint_code.h':
    int len_model_parameters()


cdef extern from 'planar_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7136718753491164025 = np.empty((3,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_7136718753491164025.data)
    return out_7136718753491164025
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2322432977313704027 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_2322432977313704027.data)
    return out_2322432977313704027
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_3589408009681196228 = np.empty((3,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_3589408009681196228.data)
    return out_3589408009681196228
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2004435374870575889 = np.empty((1,6))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_2004435374870575889.data)
    return out_2004435374870575889
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2206741638912068342 = np.empty((1,6))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_2206741638912068342.data)
    return out_2206741638912068342
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_3791164168042338662 = np.empty((1,6))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_3791164168042338662.data)
    return out_3791164168042338662
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_4915780725141845155 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_4915780725141845155.data)
    return out_4915780725141845155
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_795651932216339502 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_795651932216339502.data)
    return out_795651932216339502
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2372189086250648796 = np.empty((1,6))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_2372189086250648796.data)
    return out_2372189086250648796
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1120808833313391499 = np.empty((1,6))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_1120808833313391499.data)
    return out_1120808833313391499
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1161741101984001572 = np.empty((1,3))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_1161741101984001572.data)
    return out_1161741101984001572
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1118820089705171044 = np.empty((1,3))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_1118820089705171044.data)
    return out_1118820089705171044
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()