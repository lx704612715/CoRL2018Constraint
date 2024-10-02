import numpy as np
cimport numpy as np

cdef extern from 'point_contact_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_431547526589437369)


cdef extern from 'point_contact_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7436422419839965114)


cdef extern from 'point_contact_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3828099194805962454)


cdef extern from 'point_contact_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3102138035215914658)


cdef extern from 'point_contact_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_298240088454474737)


cdef extern from 'point_contact_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_6010921706475279569)


cdef extern from 'point_contact_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6976275946143848443)


cdef extern from 'point_contact_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_3765879664143284016)


cdef extern from 'point_contact_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_3102138035215914658)


cdef extern from 'point_contact_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_141747501453402660)


cdef extern from 'point_contact_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6376088467574797950)


cdef extern from 'point_contact_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6967761050281745575)


cdef extern from 'point_contact_constraint_code.h':
    int len_model_parameters()


cdef extern from 'point_contact_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_431547526589437369 = np.empty((3,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_431547526589437369.data)
    return out_431547526589437369
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_7436422419839965114 = np.empty((1,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_7436422419839965114.data)
    return out_7436422419839965114
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_3828099194805962454 = np.empty((3,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_3828099194805962454.data)
    return out_3828099194805962454
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_3102138035215914658 = np.empty((1,6))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_3102138035215914658.data)
    return out_3102138035215914658
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_298240088454474737 = np.empty((1,6))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_298240088454474737.data)
    return out_298240088454474737
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_6010921706475279569 = np.empty((1,6))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, a, b, c, sx, sy, sz, <double*> out_6010921706475279569.data)
    return out_6010921706475279569
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_6976275946143848443 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_6976275946143848443.data)
    return out_6976275946143848443
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_3765879664143284016 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_3765879664143284016.data)
    return out_3765879664143284016
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_3102138035215914658 = np.empty((1,6))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_3102138035215914658.data)
    return out_3102138035215914658
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_141747501453402660 = np.empty((1,6))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_141747501453402660.data)
    return out_141747501453402660
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_6376088467574797950 = np.empty((1,3))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_6376088467574797950.data)
    return out_6376088467574797950
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double a, double b, double c, double sx, double sy, double sz):

    cdef np.ndarray[np.double_t, ndim=2] out_6967761050281745575 = np.empty((1,3))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, a, b, c, sx, sy, sz, <double*> out_6967761050281745575.data)
    return out_6967761050281745575
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()