/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/


#ifndef PROJECT__CONCENTRIC_CYLINDER_CONSTRAINT_CODE__H
#define PROJECT__CONCENTRIC_CYLINDER_CONSTRAINT_CODE__H

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_1499503369347533620);
void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2716556446263938911);
void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3446684493988264297);
void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_6957852877231990418);
void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_1086867137302396080);
void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2992227511639975090);
void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2577735310198842272);
void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_8846334684720147407);
void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3390957071555433145);
void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_2376942756899440736);
void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_7985105850079005335);
void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double *out_3960692701015824657);
int len_model_parameters();
int num_k();

#endif

