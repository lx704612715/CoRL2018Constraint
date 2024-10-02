/******************************************************************************
 *                      Code generated with SymPy 1.13.2                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/


#ifndef PROJECT__POINT_CONTACT_CONSTRAINT_CODE__H
#define PROJECT__POINT_CONTACT_CONSTRAINT_CODE__H

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_431547526589437369);
void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7436422419839965114);
void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3828099194805962454);
void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3102138035215914658);
void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_298240088454474737);
void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_6010921706475279569);
void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6976275946143848443);
void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_3765879664143284016);
void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_3102138035215914658);
void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_141747501453402660);
void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6376088467574797950);
void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6967761050281745575);
int len_model_parameters();
int num_k();

#endif

