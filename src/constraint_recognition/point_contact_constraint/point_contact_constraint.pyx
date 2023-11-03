import numpy as np
cimport numpy as np

cdef extern from 'point_contact_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_4942125929913311637)


cdef extern from 'point_contact_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_2322051777240035972)


cdef extern from 'point_contact_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_4316003019421150203)


cdef extern from 'point_contact_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7023650638810433953)


cdef extern from 'point_contact_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3952702101576008674)


cdef extern from 'point_contact_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7220167723495733039)


cdef extern from 'point_contact_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6363955425334660758)


cdef extern from 'point_contact_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6493948434662624300)


cdef extern from 'point_contact_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_7023650638810433953)


cdef extern from 'point_contact_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_2772341054881569113)


cdef extern from 'point_contact_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_8148308030259913001)


cdef extern from 'point_contact_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_5961723266696155307)


cdef extern from 'point_contact_constraint_code.h':
    int len_model_parameters()


cdef extern from 'point_contact_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_4942125929913311637 = np.empty((3,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_4942125929913311637.data)
    return out_4942125929913311637
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_2322051777240035972 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_2322051777240035972.data)
    return out_2322051777240035972
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_4316003019421150203 = np.empty((3,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_4316003019421150203.data)
    return out_4316003019421150203
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_7023650638810433953 = np.empty((1,6))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_7023650638810433953.data)
    return out_7023650638810433953
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_3952702101576008674 = np.empty((1,6))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_3952702101576008674.data)
    return out_3952702101576008674
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_7220167723495733039 = np.empty((1,6))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_7220167723495733039.data)
    return out_7220167723495733039
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_6363955425334660758 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_6363955425334660758.data)
    return out_6363955425334660758
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_6493948434662624300 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_6493948434662624300.data)
    return out_6493948434662624300
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_7023650638810433953 = np.empty((1,6))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_7023650638810433953.data)
    return out_7023650638810433953
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_2772341054881569113 = np.empty((1,6))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_2772341054881569113.data)
    return out_2772341054881569113
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_8148308030259913001 = np.empty((1,3))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_8148308030259913001.data)
    return out_8148308030259913001
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_5961723266696155307 = np.empty((1,3))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_5961723266696155307.data)
    return out_5961723266696155307
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()