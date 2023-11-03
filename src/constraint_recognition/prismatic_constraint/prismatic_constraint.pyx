import numpy as np
cimport numpy as np

cdef extern from 'prismatic_constraint_code.h':
    void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2342540220691219665)


cdef extern from 'prismatic_constraint_code.h':
    void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_4162519340004497933)


cdef extern from 'prismatic_constraint_code.h':
    void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2951465968623914821)


cdef extern from 'prismatic_constraint_code.h':
    void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_6449172995580356680)


cdef extern from 'prismatic_constraint_code.h':
    void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_8161785126179547622)


cdef extern from 'prismatic_constraint_code.h':
    void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_7185655041932902556)


cdef extern from 'prismatic_constraint_code.h':
    void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_863361286661855194)


cdef extern from 'prismatic_constraint_code.h':
    void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3277335128713932616)


cdef extern from 'prismatic_constraint_code.h':
    void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_7666694164799708015)


cdef extern from 'prismatic_constraint_code.h':
    void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_6797442909469546384)


cdef extern from 'prismatic_constraint_code.h':
    void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2059470818310066154)


cdef extern from 'prismatic_constraint_code.h':
    void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_6934193049965214303)


cdef extern from 'prismatic_constraint_code.h':
    int len_model_parameters()


cdef extern from 'prismatic_constraint_code.h':
    int num_k()

def Phi_mat_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2342540220691219665 = np.empty((5,1))
    Phi_mat(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2342540220691219665.data)
    return out_2342540220691219665
def non_kin_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_4162519340004497933 = np.empty((3,1))
    non_kin(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_4162519340004497933.data)
    return out_4162519340004497933
def phidelta_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2951465968623914821 = np.empty((5,1))
    phidelta(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2951465968623914821.data)
    return out_2951465968623914821
def non_kinJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_6449172995580356680 = np.empty((1,10))
    non_kinJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_6449172995580356680.data)
    return out_6449172995580356680
def Phi_matJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_8161785126179547622 = np.empty((1,10))
    Phi_matJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_8161785126179547622.data)
    return out_8161785126179547622
def phideltaJ_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_7185655041932902556 = np.empty((1,10))
    phideltaJ(rx, ry, rz, e0, e1, e2, e3, vx, vy, vz, wx, wy, wz, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_7185655041932902556.data)
    return out_7185655041932902556
def feq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_863361286661855194 = np.empty((3,1))
    feq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_863361286661855194.data)
    return out_863361286661855194
def taueq1_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_3277335128713932616 = np.empty((3,1))
    taueq1(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_3277335128713932616.data)
    return out_3277335128713932616
def feq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_7666694164799708015 = np.empty((1,10))
    feq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_7666694164799708015.data)
    return out_7666694164799708015
def taueq1J_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_6797442909469546384 = np.empty((1,10))
    taueq1J(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_6797442909469546384.data)
    return out_6797442909469546384
def feq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_2059470818310066154 = np.empty((1,5))
    feq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_2059470818310066154.data)
    return out_2059470818310066154
def taueq1Jk_c(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, np.ndarray[np.double_t, ndim=2] k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy):

    cdef np.ndarray[np.double_t, ndim=2] out_6934193049965214303 = np.empty((1,5))
    taueq1Jk(rx, ry, rz, e0, e1, e2, e3, frx, fry, frz, taurx, taury, taurz, <double*> k.data, sx, sy, sz, tx, ty, tz, wx_line, wy_line, dx, dy, <double*> out_6934193049965214303.data)
    return out_6934193049965214303
def len_model_parameters_c():

    return len_model_parameters()
def num_k_c():

    return num_k()