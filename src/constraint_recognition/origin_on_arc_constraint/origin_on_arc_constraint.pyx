import numpy as np
cimport numpy as np

cdef extern from 'origin_on_arc_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_8556448975341173293)


cdef extern from 'origin_on_arc_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7436422419839965114)


cdef extern from 'origin_on_arc_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_89975498808801909)


cdef extern from 'origin_on_arc_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_823842880196838654)


cdef extern from 'origin_on_arc_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_2320516257661058206)


cdef extern from 'origin_on_arc_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_3533092964172574065)


cdef extern from 'origin_on_arc_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_5825004010405640870)


cdef extern from 'origin_on_arc_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7190137372627373315)


cdef extern from 'origin_on_arc_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_5878154503729416169)


cdef extern from 'origin_on_arc_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_823842880196838654)


cdef extern from 'origin_on_arc_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7356237417132243509)


cdef extern from 'origin_on_arc_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_8628651147931705056)


cdef extern from 'origin_on_arc_constraint_code.h':
    int len_model_parameters()


cdef extern from 'origin_on_arc_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_8556448975341173293 = np.empty((3,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_8556448975341173293.data)
    return out_8556448975341173293
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_7436422419839965114 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_7436422419839965114.data)
    return out_7436422419839965114
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_89975498808801909 = np.empty((3,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_89975498808801909.data)
    return out_89975498808801909
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_823842880196838654 = np.empty((1,7))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_823842880196838654.data)
    return out_823842880196838654
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_2320516257661058206 = np.empty((1,7))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_2320516257661058206.data)
    return out_2320516257661058206
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_3533092964172574065 = np.empty((1,7))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_3533092964172574065.data)
    return out_3533092964172574065
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_5825004010405640870 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_5825004010405640870.data)
    return out_5825004010405640870
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_7190137372627373315 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_7190137372627373315.data)
    return out_7190137372627373315
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_5878154503729416169 = np.empty((1,7))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_5878154503729416169.data)
    return out_5878154503729416169
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_823842880196838654 = np.empty((1,7))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_823842880196838654.data)
    return out_823842880196838654
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_7356237417132243509 = np.empty((1,3))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_7356237417132243509.data)
    return out_7356237417132243509
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_8628651147931705056 = np.empty((1,3))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_8628651147931705056.data)
    return out_8628651147931705056
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()