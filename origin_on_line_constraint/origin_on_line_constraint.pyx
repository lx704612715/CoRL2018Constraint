import numpy as np
cimport numpy as np

cdef extern from 'origin_on_line_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy, double *out_6432193836096991789)


cdef extern from 'origin_on_line_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy, double *out_2322051777240035972)


cdef extern from 'origin_on_line_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy, double *out_1005831916355804871)


cdef extern from 'origin_on_line_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy, double *out_5560311283426050539)


cdef extern from 'origin_on_line_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy, double *out_5087923312000509147)


cdef extern from 'origin_on_line_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy, double *out_931622680267244430)


cdef extern from 'origin_on_line_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double dx, double dy, double *out_4827245986571033722)


cdef extern from 'origin_on_line_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double dx, double dy, double *out_4574504036926336241)


cdef extern from 'origin_on_line_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double dx, double dy, double *out_2420439647978858339)


cdef extern from 'origin_on_line_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double dx, double dy, double *out_5560311283426050539)


cdef extern from 'origin_on_line_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double dx, double dy, double *out_9028698567081602445)


cdef extern from 'origin_on_line_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double dx, double dy, double *out_893940519844043467)


cdef extern from 'origin_on_line_constraint_code.h':
    int len_model_parameters()


cdef extern from 'origin_on_line_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_6432193836096991789 = np.empty((2,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, dx, dy, <double*> out_6432193836096991789.data)
    return out_6432193836096991789
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, dx, dy, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_1005831916355804871 = np.empty((2,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, dx, dy, <double*> out_1005831916355804871.data)
    return out_1005831916355804871
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_5560311283426050539 = np.empty((1,4))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, dx, dy, <double*> out_5560311283426050539.data)
    return out_5560311283426050539
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_5087923312000509147 = np.empty((1,4))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, dx, dy, <double*> out_5087923312000509147.data)
    return out_5087923312000509147
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_931622680267244430 = np.empty((1,4))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, dx, dy, <double*> out_931622680267244430.data)
    return out_931622680267244430
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4827245986571033722 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, dx, dy, <double*> out_4827245986571033722.data)
    return out_4827245986571033722
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4574504036926336241 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, dx, dy, <double*> out_4574504036926336241.data)
    return out_4574504036926336241
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2420439647978858339 = np.empty((1,4))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, dx, dy, <double*> out_2420439647978858339.data)
    return out_2420439647978858339
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_5560311283426050539 = np.empty((1,4))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, dx, dy, <double*> out_5560311283426050539.data)
    return out_5560311283426050539
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_9028698567081602445 = np.empty((1,2))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, dx, dy, <double*> out_9028698567081602445.data)
    return out_9028698567081602445
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_893940519844043467 = np.empty((1,2))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, dx, dy, <double*> out_893940519844043467.data)
    return out_893940519844043467
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()