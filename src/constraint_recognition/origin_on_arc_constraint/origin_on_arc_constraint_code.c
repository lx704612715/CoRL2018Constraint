/******************************************************************************
 *                      Code generated with SymPy 1.13.2                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "origin_on_arc_constraint_code.h"
#include <math.h>

void Phi_mat(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_8556448975341173293) {

   out_8556448975341173293[0] = -wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));
   out_8556448975341173293[1] = -wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));
   out_8556448975341173293[2] = -1.0 + (pow(cx - rx, 2) + pow(cy - ry, 2) + pow(cz - rz, 2))/pow(R, 2);

}

void non_kin(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7436422419839965114) {

   out_7436422419839965114[0] = 0;

}

void phidelta(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_89975498808801909) {

   out_89975498808801909[0] = 0;
   out_89975498808801909[1] = vx*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - vy*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + vz*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));
   out_89975498808801909[2] = vx*(-2*cx + 2*rx)/pow(R, 2) + vy*(-2*cy + 2*ry)/pow(R, 2) + vz*(-2*cz + 2*rz)/pow(R, 2);

}

void non_kinJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_823842880196838654) {

   out_823842880196838654[0] = 0;
   out_823842880196838654[1] = 0;
   out_823842880196838654[2] = 0;
   out_823842880196838654[3] = 0;
   out_823842880196838654[4] = 0;
   out_823842880196838654[5] = 0;
   out_823842880196838654[6] = 0;

}

void Phi_matJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_2320516257661058206) {

   out_2320516257661058206[0] = (-wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(2.0*d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*pow(wx_line, 2)*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*pow(wx_line, 2)*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*wx_line*wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*(cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-1.0*d*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 1.0*d*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + d*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(1.0*d*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 1.0*d*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))) + (-wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(2.0*d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-1.0*d*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 1.0*d*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + d*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(1.0*d*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 1.0*d*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_2320516257661058206[1] = (-wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(2.0*d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*wx_line*wy_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*wy_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-1.0*d*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 1.0*d*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*pow(wy_line, 2)*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*pow(wy_line, 2)*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wy_line*(cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(1.0*d*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 1.0*d*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - d*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))) + (-wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(2.0*d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-1.0*d*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 1.0*d*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(1.0*d*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 1.0*d*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - d*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_2320516257661058206[2] = (-2*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*pow(sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2) - 2*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*pow(sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2) - 2*pow(cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2))*(-wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))) + (-2*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*pow(sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2) - 2*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*pow(sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2) - 2*pow(cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))), 2))*(-wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + ry)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rx)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (-d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + rz)*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_2320516257661058206[3] = 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*(-1.0 + (pow(cx - rx, 2) + pow(cy - ry, 2) + pow(cz - rz, 2))/pow(R, 2))*(2*cx - 2*rx)/pow(R, 2);
   out_2320516257661058206[4] = -2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(-wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*(-1.0 + (pow(cx - rx, 2) + pow(cy - ry, 2) + pow(cz - rz, 2))/pow(R, 2))*(2*cy - 2*ry)/pow(R, 2);
   out_2320516257661058206[5] = 2*(-wx_line*(cy + d*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + wy_line*(cx - d*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + (cz - d*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*(-1.0 + (pow(cx - rx, 2) + pow(cy - ry, 2) + pow(cz - rz, 2))/pow(R, 2))*(2*cz - 2*rz)/pow(R, 2);
   out_2320516257661058206[6] = -4*(-1.0 + (pow(cx - rx, 2) + pow(cy - ry, 2) + pow(cz - rz, 2))/pow(R, 2))*(pow(cx - rx, 2) + pow(cy - ry, 2) + pow(cz - rz, 2))/pow(R, 3);

}

void phideltaJ(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double vx, double vy, double vz, double wx, double wy, double wz, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_3533092964172574065) {

   out_3533092964172574065[0] = (vx*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - vy*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + vz*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(-2.0*vx*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vx*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vy*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vy*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2*vy*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vz*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_3533092964172574065[1] = (vx*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - vy*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + vz*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))))*(-2.0*vx*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vx*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*vx*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2.0*vy*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vy*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) - 2.0*vz*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))));
   out_3533092964172574065[2] = 0;
   out_3533092964172574065[3] = -4*vx*(vx*(-2*cx + 2*rx)/pow(R, 2) + vy*(-2*cy + 2*ry)/pow(R, 2) + vz*(-2*cz + 2*rz)/pow(R, 2))/pow(R, 2);
   out_3533092964172574065[4] = -4*vy*(vx*(-2*cx + 2*rx)/pow(R, 2) + vy*(-2*cy + 2*ry)/pow(R, 2) + vz*(-2*cz + 2*rz)/pow(R, 2))/pow(R, 2);
   out_3533092964172574065[5] = -4*vz*(vx*(-2*cx + 2*rx)/pow(R, 2) + vy*(-2*cy + 2*ry)/pow(R, 2) + vz*(-2*cz + 2*rz)/pow(R, 2))/pow(R, 2);
   out_3533092964172574065[6] = (-4*vx*(-2*cx + 2*rx)/pow(R, 3) - 4*vy*(-2*cy + 2*ry)/pow(R, 3) - 4*vz*(-2*cz + 2*rz)/pow(R, 3))*(vx*(-2*cx + 2*rx)/pow(R, 2) + vy*(-2*cy + 2*ry)/pow(R, 2) + vz*(-2*cz + 2*rz)/pow(R, 2));

}

void feq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_5825004010405640870) {

   out_5825004010405640870[0] = frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2);
   out_5825004010405640870[1] = fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2);
   out_5825004010405640870[2] = frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2);

}

void taueq1(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7190137372627373315) {

   out_7190137372627373315[0] = taurx;
   out_7190137372627373315[1] = taury;
   out_7190137372627373315[2] = taurz;

}

void feq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_5878154503729416169) {

   out_5878154503729416169[0] = -2.0*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1])*(frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2)) + (fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2))*(2.0*pow(wx_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] - 2.0*pow(wx_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] - 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1]);
   out_5878154503729416169[1] = -2.0*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (2.0*wx_line*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] - 2.0*wx_line*wy_line*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1])*(fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2)) + (frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2))*(-2.0*pow(wy_line, 2)*pow(pow(wx_line, 2) + pow(wy_line, 2), -1.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + 2.0*pow(wy_line, 2)*1.0/(pow(wx_line, 2) + pow(wy_line, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + 2*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1]);
   out_5878154503729416169[2] = 0;
   out_5878154503729416169[3] = -4*(frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2))*k[2]/pow(R, 2);
   out_5878154503729416169[4] = -4*(fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2))*k[2]/pow(R, 2);
   out_5878154503729416169[5] = -4*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2))*k[2]/pow(R, 2);
   out_5878154503729416169[6] = -4*(-2*cx + 2*rx)*(frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2))*k[2]/pow(R, 3) - 4*(-2*cy + 2*ry)*(fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2))*k[2]/pow(R, 3) - 4*(-2*cz + 2*rz)*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2))*k[2]/pow(R, 3);

}

void taueq1J(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_823842880196838654) {

   out_823842880196838654[0] = 0;
   out_823842880196838654[1] = 0;
   out_823842880196838654[2] = 0;
   out_823842880196838654[3] = 0;
   out_823842880196838654[4] = 0;
   out_823842880196838654[5] = 0;
   out_823842880196838654[6] = 0;

}

void feq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_7356237417132243509) {

   out_7356237417132243509[0] = 0;
   out_7356237417132243509[1] = -2*wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*(frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2))*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2))) + 2*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2))*cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)));
   out_7356237417132243509[2] = 2*(-2*cx + 2*rx)*(frx + wy_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cx + 2*rx)*k[2]/pow(R, 2))/pow(R, 2) + 2*(-2*cy + 2*ry)*(fry - wx_line*pow(pow(wx_line, 2) + pow(wy_line, 2), -0.5)*sin(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cy + 2*ry)*k[2]/pow(R, 2))/pow(R, 2) + 2*(-2*cz + 2*rz)*(frz + cos(sqrt(pow(wx_line, 2) + pow(wy_line, 2)))*k[1] + (-2*cz + 2*rz)*k[2]/pow(R, 2))/pow(R, 2);

}

void taueq1Jk(double rx, double ry, double rz, double e0, double e1, double e2, double e3, double frx, double fry, double frz, double taurx, double taury, double taurz, double *k, double wx_line, double wy_line, double d, double cx, double cy, double cz, double R, double *out_8628651147931705056) {

   out_8628651147931705056[0] = 0;
   out_8628651147931705056[1] = 0;
   out_8628651147931705056[2] = 0;

}

int len_model_parameters() {

   int len_model_parameters_result;
   len_model_parameters_result = 7;
   return len_model_parameters_result;

}

int num_k() {

   int num_k_result;
   num_k_result = 3;
   return num_k_result;

}
