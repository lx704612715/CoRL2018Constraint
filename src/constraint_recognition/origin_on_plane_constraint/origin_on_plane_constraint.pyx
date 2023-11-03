import numpy as np
cimport numpy as np

cdef extern from 'origin_on_plane_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_7069180683438085393)


cdef extern from 'origin_on_plane_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_2322051777240035972)


cdef extern from 'origin_on_plane_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_4750788825962881968)


cdef extern from 'origin_on_plane_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_7511436009664848654)


cdef extern from 'origin_on_plane_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_5672010525765139962)


cdef extern from 'origin_on_plane_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_3102658829443668583)


cdef extern from 'origin_on_plane_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_6671366312737300363)


cdef extern from 'origin_on_plane_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_4574504036926336241)


cdef extern from 'origin_on_plane_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_5093762060577682889)


cdef extern from 'origin_on_plane_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_7511436009664848654)


cdef extern from 'origin_on_plane_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_1946805085620972852)


cdef extern from 'origin_on_plane_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_2322051777240035972)


cdef extern from 'origin_on_plane_constraint_code.h':
    int len_model_parameters()


cdef extern from 'origin_on_plane_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7069180683438085393 = np.empty((1,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, <double*> out_7069180683438085393.data)
    return out_7069180683438085393
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_4750788825962881968 = np.empty((1,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, <double*> out_4750788825962881968.data)
    return out_4750788825962881968
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7511436009664848654 = np.empty((1,3))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, <double*> out_7511436009664848654.data)
    return out_7511436009664848654
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_5672010525765139962 = np.empty((1,3))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, <double*> out_5672010525765139962.data)
    return out_5672010525765139962
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_3102658829443668583 = np.empty((1,3))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, <double*> out_3102658829443668583.data)
    return out_3102658829443668583
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_6671366312737300363 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, <double*> out_6671366312737300363.data)
    return out_6671366312737300363
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_4574504036926336241 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, <double*> out_4574504036926336241.data)
    return out_4574504036926336241
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_5093762060577682889 = np.empty((1,3))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, <double*> out_5093762060577682889.data)
    return out_5093762060577682889
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_7511436009664848654 = np.empty((1,3))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, <double*> out_7511436009664848654.data)
    return out_7511436009664848654
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_1946805085620972852 = np.empty((1,1))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, <double*> out_1946805085620972852.data)
    return out_1946805085620972852
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()