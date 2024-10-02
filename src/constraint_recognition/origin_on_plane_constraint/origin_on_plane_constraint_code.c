/******************************************************************************
 *                      Code generated with SymPy 1.13.2                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "origin_on_plane_constraint_code.h"
#include <math.h>

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_302987340353537265) {

   out_302987340353537265[0] = -wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));

}

void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_7436422419839965114) {

   out_7436422419839965114[0] = 0;

}

void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_5358858626176610970) {

   out_5358858626176610970[0] = vx*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - vy*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + vz*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));

}

void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_8628651147931705056) {

   out_8628651147931705056[0] = 0;
   out_8628651147931705056[1] = 0;
   out_8628651147931705056[2] = 0;

}

void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_3696678459582781037) {

   out_3696678459582781037[0] = (-wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(2.0*d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-1.0*d*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 1.0*d*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + d*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(1.0*d*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 1.0*d*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_3696678459582781037[1] = (-wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(2.0*d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-1.0*d*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 1.0*d*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(1.0*d*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 1.0*d*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - d*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_3696678459582781037[2] = (-2*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*pow(sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2) - 2*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*pow(sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2) - 2*pow(cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2))*(-wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));

}

void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double *out_8205993485022280889) {

   out_8205993485022280889[0] = (vx*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - vy*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + vz*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(-2.0*vx*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vx*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vy*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vy*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*vy*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vz*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_8205993485022280889[1] = (vx*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - vy*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + vz*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(-2.0*vx*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vx*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*vx*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vy*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vy*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vz*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_8205993485022280889[2] = 0;

}

void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_5891048571006344098) {

   out_5891048571006344098[0] = frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0];
   out_5891048571006344098[1] = fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0];
   out_5891048571006344098[2] = frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0];

}

void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_7190137372627373315) {

   out_7190137372627373315[0] = taurx;
   out_7190137372627373315[1] = taury;
   out_7190137372627373315[2] = taurz;

}

void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_6947941741117770109) {

   out_6947941741117770109[0] = -2.0*wx_line*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] + (frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*(-2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] + 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0]) + (fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*(2.0*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] - 2.0*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] - 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0]);
   out_6947941741117770109[1] = -2.0*wy_line*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] + (frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*(-2.0*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] + 2.0*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] + 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0]) + (fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*(2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0] - 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0]);
   out_6947941741117770109[2] = 0;

}

void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_8628651147931705056) {

   out_8628651147931705056[0] = 0;
   out_8628651147931705056[1] = 0;
   out_8628651147931705056[2] = 0;

}

void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_3491412123891180923) {

   out_3491412123891180923[0] = -2*wx_line*(fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*(frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[0])*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));

}

void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double *out_7436422419839965114) {

   out_7436422419839965114[0] = 0;

}

int len_model_parameters() {

   int len_model_parameters_result;
   len_model_parameters_result = 3;
   return len_model_parameters_result;

}

int num_k() {

   int num_k_result;
   num_k_result = 1;
   return num_k_result;

}
