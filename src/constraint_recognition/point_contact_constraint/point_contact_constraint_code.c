/******************************************************************************
 *                      Code generated with SymPy 1.13.2                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "point_contact_constraint_code.h"
#include <math.h>

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_431547526589437369) {

   out_431547526589437369[0] = a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3);
   out_431547526589437369[1] = b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3);
   out_431547526589437369[2] = c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2));

}

void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7436422419839965114) {

   out_7436422419839965114[0] = 0;

}

void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3828099194805962454) {

   out_3828099194805962454[0] = -vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy));
   out_3828099194805962454[1] = -vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx));
   out_3828099194805962454[2] = -vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx));

}

void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3102138035215914658) {

   out_3102138035215914658[0] = 0;
   out_3102138035215914658[1] = 0;
   out_3102138035215914658[2] = 0;
   out_3102138035215914658[3] = 0;
   out_3102138035215914658[4] = 0;
   out_3102138035215914658[5] = 0;

}

void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_298240088454474737) {

   out_298240088454474737[0] = 2*a - 2*rx - 2*sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - 2*sy*(-2*e0*e3 + 2*e1*e2) - 2*sz*(2*e0*e2 + 2*e1*e3);
   out_298240088454474737[1] = 2*b - 2*ry - 2*sx*(2*e0*e3 + 2*e1*e2) - 2*sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - 2*sz*(-2*e0*e1 + 2*e2*e3);
   out_298240088454474737[2] = 2*c - 2*rz - 2*sx*(-2*e0*e2 + 2*e1*e3) - 2*sy*(2*e0*e1 + 2*e2*e3) - 2*sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2));
   out_298240088454474737[3] = (4*e0*e2 - 4*e1*e3)*(c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2))) + (-4*e0*e3 - 4*e1*e2)*(b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3)) + (-2*pow(e0, 2) - 2*pow(e1, 2) + 2*pow(e2, 2) + 2*pow(e3, 2))*(a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3));
   out_298240088454474737[4] = (-4*e0*e1 - 4*e2*e3)*(c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2))) + (4*e0*e3 - 4*e1*e2)*(a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3)) + (-2*pow(e0, 2) + 2*pow(e1, 2) - 2*pow(e2, 2) + 2*pow(e3, 2))*(b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3));
   out_298240088454474737[5] = (4*e0*e1 - 4*e2*e3)*(b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3)) + (-4*e0*e2 - 4*e1*e3)*(a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3)) + (-2*pow(e0, 2) + 2*pow(e1, 2) + 2*pow(e2, 2) - 2*pow(e3, 2))*(c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2)));

}

void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_6010921706475279569) {

   out_6010921706475279569[0] = 0;
   out_6010921706475279569[1] = 0;
   out_6010921706475279569[2] = 0;
   out_6010921706475279569[3] = (2*wy*(-2.0*e0*e1 + 2.0*e2*e3) + 2*wz*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2)))*(-vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx))) + (2*wy*(2.0*e0*e2 + 2.0*e1*e3) + 2*wz*(2.0*e0*e3 - 2.0*e1*e2))*(-vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy))) + (2*wy*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2)) + 2*wz*(-2.0*e0*e1 - 2.0*e2*e3))*(-vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)));
   out_6010921706475279569[4] = (2*wx*(2.0*e0*e1 - 2.0*e2*e3) + 2*wz*(2.0*e0*e3 + 2.0*e1*e2))*(-vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx))) + (2*wx*(-2.0*e0*e2 - 2.0*e1*e3) + 2*wz*(1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) - 1.0*pow(e3, 2)))*(-vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy))) + (2*wx*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2)) + 2*wz*(-2.0*e0*e2 + 2.0*e1*e3))*(-vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)));
   out_6010921706475279569[5] = (2*wx*(2.0*e0*e1 + 2.0*e2*e3) + 2*wy*(2.0*e0*e2 - 2.0*e1*e3))*(-vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx))) + (2*wx*(-2.0*e0*e3 + 2.0*e1*e2) + 2*wy*(-1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) + 1.0*pow(e3, 2)))*(-vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy))) + (2*wx*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2)) + 2*wy*(-2.0*e0*e3 - 2.0*e1*e2))*(-vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)));

}

void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6976275946143848443) {

   out_6976275946143848443[0] = frx - k[0];
   out_6976275946143848443[1] = fry - k[1];
   out_6976275946143848443[2] = frz - k[2];

}

void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_3765879664143284016) {

   out_3765879664143284016[0] = taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0];
   out_3765879664143284016[1] = taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1];
   out_3765879664143284016[2] = taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2];

}

void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_3102138035215914658) {

   out_3102138035215914658[0] = 0;
   out_3102138035215914658[1] = 0;
   out_3102138035215914658[2] = 0;
   out_3102138035215914658[3] = 0;
   out_3102138035215914658[4] = 0;
   out_3102138035215914658[5] = 0;

}

void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_141747501453402660) {

   out_141747501453402660[0] = 0;
   out_141747501453402660[1] = 0;
   out_141747501453402660[2] = 0;
   out_141747501453402660[3] = (2*(-2.0*e0*e1 - 2.0*e2*e3)*k[2] + 2*(2.0*e0*e3 - 2.0*e1*e2)*k[0] + 2*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2))*k[1])*(taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2]) + (2*(-2.0*e0*e1 + 2.0*e2*e3)*k[1] + 2*(2.0*e0*e2 + 2.0*e1*e3)*k[0] + 2*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2))*k[2])*(taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1]);
   out_141747501453402660[4] = (2*(2.0*e0*e1 - 2.0*e2*e3)*k[1] + 2*(-2.0*e0*e2 - 2.0*e1*e3)*k[0] + 2*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2))*k[2])*(taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0]) + (2*(-2.0*e0*e2 + 2.0*e1*e3)*k[2] + 2*(2.0*e0*e3 + 2.0*e1*e2)*k[1] + 2*(1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) - 1.0*pow(e3, 2))*k[0])*(taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2]);
   out_141747501453402660[5] = (2*(2.0*e0*e1 + 2.0*e2*e3)*k[2] + 2*(-2.0*e0*e3 + 2.0*e1*e2)*k[0] + 2*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2))*k[1])*(taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0]) + (2*(2.0*e0*e2 - 2.0*e1*e3)*k[2] + 2*(-2.0*e0*e3 - 2.0*e1*e2)*k[1] + 2*(-1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) + 1.0*pow(e3, 2))*k[0])*(taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1]);

}

void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6376088467574797950) {

   out_6376088467574797950[0] = -2*frx + 2*k[0];
   out_6376088467574797950[1] = -2*fry + 2*k[1];
   out_6376088467574797950[2] = -2*frz + 2*k[2];

}

void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6967761050281745575) {

   out_6967761050281745575[0] = (taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0])*(1.0*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 1.0*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx)) + (taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1])*(1.0*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 1.0*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 1.0*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz)) + (taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2])*(1.0*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 1.0*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 1.0*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy));
   out_6967761050281745575[1] = (taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0])*(1.0*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 1.0*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 1.0*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz)) + (taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1])*(1.0*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 1.0*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx)) + (taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2])*(1.0*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 1.0*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 1.0*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx));
   out_6967761050281745575[2] = (taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0])*(1.0*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 1.0*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 1.0*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy)) + (taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1])*(1.0*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 1.0*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 1.0*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx)) + (taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2])*(1.0*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 1.0*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx));

}

int len_model_parameters() {

   int len_model_parameters_result;
   len_model_parameters_result = 6;
   return len_model_parameters_result;

}

int num_k() {

   int num_k_result;
   num_k_result = 3;
   return num_k_result;

}
