import numpy as np
cimport numpy as np

cdef extern from 'concentric_cylinder_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_1499503369347533620)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2716556446263938911)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3446684493988264297)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_6957852877231990418)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_1086867137302396080)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2992227511639975090)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2577735310198842272)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_8846334684720147407)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3390957071555433145)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2376942756899440736)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_7985105850079005335)


cdef extern from 'concentric_cylinder_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3960692701015824657)


cdef extern from 'concentric_cylinder_constraint_code.h':
    int len_model_parameters()


cdef extern from 'concentric_cylinder_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_1499503369347533620 = np.empty((4,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_1499503369347533620.data)
    return out_1499503369347533620
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2716556446263938911 = np.empty((2,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2716556446263938911.data)
    return out_2716556446263938911
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_3446684493988264297 = np.empty((4,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_3446684493988264297.data)
    return out_3446684493988264297
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_6957852877231990418 = np.empty((1,10))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_6957852877231990418.data)
    return out_6957852877231990418
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_1086867137302396080 = np.empty((1,10))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_1086867137302396080.data)
    return out_1086867137302396080
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2992227511639975090 = np.empty((1,10))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2992227511639975090.data)
    return out_2992227511639975090
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2577735310198842272 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2577735310198842272.data)
    return out_2577735310198842272
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_8846334684720147407 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_8846334684720147407.data)
    return out_8846334684720147407
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_3390957071555433145 = np.empty((1,10))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_3390957071555433145.data)
    return out_3390957071555433145
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2376942756899440736 = np.empty((1,10))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2376942756899440736.data)
    return out_2376942756899440736
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_7985105850079005335 = np.empty((1,4))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_7985105850079005335.data)
    return out_7985105850079005335
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_3960692701015824657 = np.empty((1,4))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_3960692701015824657.data)
    return out_3960692701015824657
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()