import numpy as np
cimport numpy as np

cdef extern from 'point_on_plane_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_6480423272614339249)


cdef extern from 'point_on_plane_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2322051777240035972)


cdef extern from 'point_on_plane_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1038666506837190601)


cdef extern from 'point_on_plane_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_7023650638810433953)


cdef extern from 'point_on_plane_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_8373714187151597657)


cdef extern from 'point_on_plane_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_3686187259639272251)


cdef extern from 'point_on_plane_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_6671366312737300363)


cdef extern from 'point_on_plane_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_4440038344942114579)


cdef extern from 'point_on_plane_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2051675189094284072)


cdef extern from 'point_on_plane_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_8721554931892717198)


cdef extern from 'point_on_plane_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_1946805085620972852)


cdef extern from 'point_on_plane_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double wx_line, double wy_line, double d, double *out_2092872157440653332)


cdef extern from 'point_on_plane_constraint_code.h':
    int len_model_parameters()


cdef extern from 'point_on_plane_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_6480423272614339249 = np.empty((1,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_6480423272614339249.data)
    return out_6480423272614339249
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1038666506837190601 = np.empty((1,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_1038666506837190601.data)
    return out_1038666506837190601
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7023650638810433953 = np.empty((1,6))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_7023650638810433953.data)
    return out_7023650638810433953
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_8373714187151597657 = np.empty((1,6))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_8373714187151597657.data)
    return out_8373714187151597657
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_3686187259639272251 = np.empty((1,6))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, wx_line, wy_line, d, <double*> out_3686187259639272251.data)
    return out_3686187259639272251
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_6671366312737300363 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_6671366312737300363.data)
    return out_6671366312737300363
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_4440038344942114579 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_4440038344942114579.data)
    return out_4440038344942114579
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2051675189094284072 = np.empty((1,6))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_2051675189094284072.data)
    return out_2051675189094284072
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_8721554931892717198 = np.empty((1,6))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_8721554931892717198.data)
    return out_8721554931892717198
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1946805085620972852 = np.empty((1,1))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_1946805085620972852.data)
    return out_1946805085620972852
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2092872157440653332 = np.empty((1,1))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, wx_line, wy_line, d, <double*> out_2092872157440653332.data)
    return out_2092872157440653332
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()