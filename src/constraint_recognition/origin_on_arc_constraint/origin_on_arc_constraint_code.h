/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/


#ifndef PROJECT__ORIGIN_ON_ARC_CONSTRAINT_CODE__H
#define PROJECT__ORIGIN_ON_ARC_CONSTRAINT_CODE__H

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_5250626662994743197);
void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_2322051777240035972);
void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7321743083643047263);
void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_4975867137388042242);
void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_1955364171081566887);
void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_6985140554717445028);
void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_6290952970144440439);
void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_4574504036926336241);
void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_9009442150464259791);
void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_4975867137388042242);
void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_1081206637323670961);
void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7511436009664848654);
int len_model_parameters();
int num_k();

#endif

