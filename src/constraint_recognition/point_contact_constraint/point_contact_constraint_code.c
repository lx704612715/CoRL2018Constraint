/******************************************************************************
 *                      Code generated with SymPy 1.10.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "point_contact_constraint_code.h"
#include <math.h>

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_4942125929913311637) {

   out_4942125929913311637[0] = a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3);
   out_4942125929913311637[1] = b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3);
   out_4942125929913311637[2] = c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2));

}

void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_2322051777240035972) {

   out_2322051777240035972[0] = 0;

}

void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_4316003019421150203) {

   out_4316003019421150203[0] = -vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy));
   out_4316003019421150203[1] = -vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx));
   out_4316003019421150203[2] = -vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx));

}

void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7023650638810433953) {

   out_7023650638810433953[0] = 0;
   out_7023650638810433953[1] = 0;
   out_7023650638810433953[2] = 0;
   out_7023650638810433953[3] = 0;
   out_7023650638810433953[4] = 0;
   out_7023650638810433953[5] = 0;

}

void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_3952702101576008674) {

   out_3952702101576008674[0] = 2*a - 2*rx - 2*sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - 2*sy*(-2*e0*e3 + 2*e1*e2) - 2*sz*(2*e0*e2 + 2*e1*e3);
   out_3952702101576008674[1] = 2*b - 2*ry - 2*sx*(2*e0*e3 + 2*e1*e2) - 2*sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - 2*sz*(-2*e0*e1 + 2*e2*e3);
   out_3952702101576008674[2] = 2*c - 2*rz - 2*sx*(-2*e0*e2 + 2*e1*e3) - 2*sy*(2*e0*e1 + 2*e2*e3) - 2*sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2));
   out_3952702101576008674[3] = (4*e0*e2 - 4*e1*e3)*(c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2))) + (-4*e0*e3 - 4*e1*e2)*(b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3)) + (-2*pow(e0, 2) - 2*pow(e1, 2) + 2*pow(e2, 2) + 2*pow(e3, 2))*(a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3));
   out_3952702101576008674[4] = (-4*e0*e1 - 4*e2*e3)*(c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2))) + (4*e0*e3 - 4*e1*e2)*(a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3)) + (-2*pow(e0, 2) + 2*pow(e1, 2) - 2*pow(e2, 2) + 2*pow(e3, 2))*(b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3));
   out_3952702101576008674[5] = (4*e0*e1 - 4*e2*e3)*(b - ry - sx*(2*e0*e3 + 2*e1*e2) - sy*(pow(e0, 2) - pow(e1, 2) + pow(e2, 2) - pow(e3, 2)) - sz*(-2*e0*e1 + 2*e2*e3)) + (-4*e0*e2 - 4*e1*e3)*(a - rx - sx*(pow(e0, 2) + pow(e1, 2) - pow(e2, 2) - pow(e3, 2)) - sy*(-2*e0*e3 + 2*e1*e2) - sz*(2*e0*e2 + 2*e1*e3)) + (-2*pow(e0, 2) + 2*pow(e1, 2) + 2*pow(e2, 2) - 2*pow(e3, 2))*(c - rz - sx*(-2*e0*e2 + 2*e1*e3) - sy*(2*e0*e1 + 2*e2*e3) - sz*(pow(e0, 2) - pow(e1, 2) - pow(e2, 2) + pow(e3, 2)));

}

void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double a, double b, double c, double sx, double sy, double sz, double *out_7220167723495733039) {

   out_7220167723495733039[0] = 0;
   out_7220167723495733039[1] = 0;
   out_7220167723495733039[2] = 0;
   out_7220167723495733039[3] = (2*wy*(-2.0*e0*e1 + 2.0*e2*e3) + 2*wz*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2)))*(-vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx))) + (2*wy*(2.0*e0*e2 + 2.0*e1*e3) + 2*wz*(2.0*e0*e3 - 2.0*e1*e2))*(-vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy))) + (2*wy*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2)) + 2*wz*(-2.0*e0*e1 - 2.0*e2*e3))*(-vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)));
   out_7220167723495733039[4] = (2*wx*(2.0*e0*e1 - 2.0*e2*e3) + 2*wz*(2.0*e0*e3 + 2.0*e1*e2))*(-vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx))) + (2*wx*(-2.0*e0*e2 - 2.0*e1*e3) + 2*wz*(1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) - 1.0*pow(e3, 2)))*(-vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy))) + (2*wx*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2)) + 2*wz*(-2.0*e0*e2 + 2.0*e1*e3))*(-vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)));
   out_7220167723495733039[5] = (2*wx*(2.0*e0*e1 + 2.0*e2*e3) + 2*wy*(2.0*e0*e2 - 2.0*e1*e3))*(-vz + wx*(e0*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e3*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy)) + wy*(e0*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e2*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)) + wz*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(1.0*e0*sx + 1.0*e2*sz - 1.0*e3*sy) + e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx))) + (2*wx*(-2.0*e0*e3 + 2.0*e1*e2) + 2*wy*(-1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) + 1.0*pow(e3, 2)))*(-vx + wx*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) + e3*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx)) + wy*(e0*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e1*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wz*(e0*(1.0*e0*sy - 1.0*e1*sz + 1.0*e3*sx) - e1*(-1.0*e0*sz - 1.0*e1*sy + 1.0*e2*sx) + e2*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) - e3*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy))) + (2*wx*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2)) + 2*wy*(-2.0*e0*e3 - 2.0*e1*e2))*(-vy + wx*(e0*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e1*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e2*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) + e3*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz)) + wy*(e0*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e1*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e2*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx) - e3*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx)) + wz*(e0*(-1.0*e0*sx - 1.0*e2*sz + 1.0*e3*sy) - e1*(-1.0*e1*sx - 1.0*e2*sy - 1.0*e3*sz) + e2*(1.0*e0*sz + 1.0*e1*sy - 1.0*e2*sx) - e3*(-1.0*e0*sy + 1.0*e1*sz - 1.0*e3*sx)));

}

void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6363955425334660758) {

   out_6363955425334660758[0] = frx - k[0];
   out_6363955425334660758[1] = fry - k[1];
   out_6363955425334660758[2] = frz - k[2];

}

void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_6493948434662624300) {

   out_6493948434662624300[0] = taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0];
   out_6493948434662624300[1] = taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1];
   out_6493948434662624300[2] = taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2];

}

void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_7023650638810433953) {

   out_7023650638810433953[0] = 0;
   out_7023650638810433953[1] = 0;
   out_7023650638810433953[2] = 0;
   out_7023650638810433953[3] = 0;
   out_7023650638810433953[4] = 0;
   out_7023650638810433953[5] = 0;

}

void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_2772341054881569113) {

   out_2772341054881569113[0] = 0;
   out_2772341054881569113[1] = 0;
   out_2772341054881569113[2] = 0;
   out_2772341054881569113[3] = (2*(-2.0*e0*e1 - 2.0*e2*e3)*k[2] + 2*(2.0*e0*e3 - 2.0*e1*e2)*k[0] + 2*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2))*k[1])*(taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2]) + (2*(-2.0*e0*e1 + 2.0*e2*e3)*k[1] + 2*(2.0*e0*e2 + 2.0*e1*e3)*k[0] + 2*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) - 1.0*pow(e2, 2) + 1.0*pow(e3, 2))*k[2])*(taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1]);
   out_2772341054881569113[4] = (2*(2.0*e0*e1 - 2.0*e2*e3)*k[1] + 2*(-2.0*e0*e2 - 2.0*e1*e3)*k[0] + 2*(-1.0*pow(e0, 2) + 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2))*k[2])*(taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0]) + (2*(-2.0*e0*e2 + 2.0*e1*e3)*k[2] + 2*(2.0*e0*e3 + 2.0*e1*e2)*k[1] + 2*(1.0*pow(e0, 2) + 1.0*pow(e1, 2) - 1.0*pow(e2, 2) - 1.0*pow(e3, 2))*k[0])*(taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2]);
   out_2772341054881569113[5] = (2*(2.0*e0*e1 + 2.0*e2*e3)*k[2] + 2*(-2.0*e0*e3 + 2.0*e1*e2)*k[0] + 2*(1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) - 1.0*pow(e3, 2))*k[1])*(taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0]) + (2*(2.0*e0*e2 - 2.0*e1*e3)*k[2] + 2*(-2.0*e0*e3 - 2.0*e1*e2)*k[1] + 2*(-1.0*pow(e0, 2) - 1.0*pow(e1, 2) + 1.0*pow(e2, 2) + 1.0*pow(e3, 2))*k[0])*(taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1]);

}

void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_8148308030259913001) {

   out_8148308030259913001[0] = -2*frx + 2*k[0];
   out_8148308030259913001[1] = -2*fry + 2*k[1];
   out_8148308030259913001[2] = -2*frz + 2*k[2];

}

void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double a, double b, double c, double sx, double sy, double sz, double *out_5961723266696155307) {

   out_5961723266696155307[0] = (taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0])*(e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx)) + (taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1])*(e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 1.0*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz)) + (taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2])*(e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 1.0*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy));
   out_5961723266696155307[1] = (taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0])*(e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 1.0*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz)) + (taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1])*(e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx)) + (taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2])*(e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 1.0*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 1.0*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx));
   out_5961723266696155307[2] = (taurx + (0.5*e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e3*(2*e0*sx + 2*e2*sz - 2*e3*sy))*k[2] + (0.5*e0*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e1*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) + 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[1] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(2*e0*sy - 2*e1*sz + 2*e3*sx) + 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[0])*(e0*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 1.0*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + e3*(2*e0*sx + 2*e2*sz - 2*e3*sy)) + (taury + (0.5*e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[2] + (0.5*e0*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e1*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e2*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e3*(-2*e1*sx - 2*e2*sy - 2*e3*sz))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e1*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(2*e0*sz + 2*e1*sy - 2*e2*sx))*k[1])*(e0*(2*e0*sx + 2*e2*sz - 2*e3*sy) + e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e2*(-2*e0*sz - 2*e1*sy + 2*e2*sx) - 1.0*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx)) + (taurz + (0.5*e0*(-2*e0*sx - 2*e2*sz + 2*e3*sy) - 0.5*e1*(-2*e1*sx - 2*e2*sy - 2*e3*sz) + 0.5*e2*(2*e0*sz + 2*e1*sy - 2*e2*sx) - 0.5*e3*(-2*e0*sy + 2*e1*sz - 2*e3*sx))*k[1] + (0.5*e0*(2*e0*sy - 2*e1*sz + 2*e3*sx) - 0.5*e1*(-2*e0*sz - 2*e1*sy + 2*e2*sx) + 0.5*e2*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e3*(-2*e0*sx - 2*e2*sz + 2*e3*sy))*k[0] + (0.5*e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 0.5*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + 0.5*e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 0.5*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx))*k[2])*(e0*(-2*e1*sx - 2*e2*sy - 2*e3*sz) - 1.0*e1*(2*e0*sx + 2*e2*sz - 2*e3*sy) + e2*(-2*e0*sy + 2*e1*sz - 2*e3*sx) - 1.0*e3*(-2*e0*sz - 2*e1*sy + 2*e2*sx));

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
