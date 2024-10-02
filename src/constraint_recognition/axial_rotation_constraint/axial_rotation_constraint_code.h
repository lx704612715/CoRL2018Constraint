/******************************************************************************
 *                      Code generated with SymPy 1.13.2                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/


#ifndef PROJECT__AXIAL_ROTATION_CONSTRAINT_CODE__H
#define PROJECT__AXIAL_ROTATION_CONSTRAINT_CODE__H

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_9200708909766654871);
void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_7014522437824047266);
void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_5102482807297750114);
void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_8096524435884101326);
void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_3998820253396051815);
void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_5094784770336120684);
void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_717923672618744582);
void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_916882218690419277);
void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_8073843821567953197);
void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_4700664725481397494);
void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_7553378290115549964);
void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double sx, double sy, double sz, double tx, double ty, double tz, double wx_line, double wy_line, double dx, double dy, double dz, double *out_2252414762231217087);
int len_model_parameters();
int num_k();

#endif

