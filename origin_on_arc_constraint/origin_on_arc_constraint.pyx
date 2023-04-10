import numpy as np
cimport numpy as np

cdef extern from 'origin_on_arc_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_5250626662994743197)


cdef extern from 'origin_on_arc_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_2322051777240035972)


cdef extern from 'origin_on_arc_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7321743083643047263)


cdef extern from 'origin_on_arc_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_4975867137388042242)


cdef extern from 'origin_on_arc_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_1955364171081566887)


cdef extern from 'origin_on_arc_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_6985140554717445028)


cdef extern from 'origin_on_arc_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_6290952970144440439)


cdef extern from 'origin_on_arc_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_4574504036926336241)


cdef extern from 'origin_on_arc_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_9009442150464259791)


cdef extern from 'origin_on_arc_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_4975867137388042242)


cdef extern from 'origin_on_arc_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_1081206637323670961)


cdef extern from 'origin_on_arc_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7511436009664848654)


cdef extern from 'origin_on_arc_constraint_code.h':
    int len_model_parameters()


cdef extern from 'origin_on_arc_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_5250626662994743197 = np.empty((3,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_5250626662994743197.data)
    return out_5250626662994743197
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_7321743083643047263 = np.empty((3,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_7321743083643047263.data)
    return out_7321743083643047263
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_4975867137388042242 = np.empty((1,7))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_4975867137388042242.data)
    return out_4975867137388042242
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_1955364171081566887 = np.empty((1,7))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_1955364171081566887.data)
    return out_1955364171081566887
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_6985140554717445028 = np.empty((1,7))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_6985140554717445028.data)
    return out_6985140554717445028
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_6290952970144440439 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_6290952970144440439.data)
    return out_6290952970144440439
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_4574504036926336241 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_4574504036926336241.data)
    return out_4574504036926336241
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_9009442150464259791 = np.empty((1,7))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_9009442150464259791.data)
    return out_9009442150464259791
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_4975867137388042242 = np.empty((1,7))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_4975867137388042242.data)
    return out_4975867137388042242
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_1081206637323670961 = np.empty((1,3))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_1081206637323670961.data)
    return out_1081206637323670961
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R):

    cdef np.ndarray[np.double_t, ndim=2] out_7511436009664848654 = np.empty((1,3))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, wx_line, wy_line, d, cx, cy, cz, R, <double*> out_7511436009664848654.data)
    return out_7511436009664848654
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()