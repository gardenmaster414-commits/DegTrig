#ifndef DEGTRIG_H
#define DEGTRIG_H

#define DEGTRIG_VERSION "1.0.0"

#include <math.h>
#include <stdio.h>

#define PI 3.141592653589
#define getrad (PI / 180.0)
#define getdeg (180.0 / PI)

/* ==========================
   Vector Structures
   ========================== */

typedef struct {
    double x;
    double y;
} vector2d;

typedef struct {
    double x;
    double y;
    double z;
} vector3d;

/* ==========================
   Unit Conversion
   ========================== */

double find_radians(double degrees);
double find_degrees(double radians);

/* ==========================
   Six Trigonometric Ratios
   ========================== */

double deg_tan(double deg);
double deg_sin(double deg);
double deg_cos(double deg);
double deg_sec(double deg);
double deg_cosec(double deg);
double deg_cotan(double deg);

/* ==========================
   Inverse Trigonometric Functions
   ========================== */

double deg_atan(double x);
double deg_asin(double x);
double deg_acos(double x);
double deg_asec(double x);
double deg_acosec(double x);
double deg_acotan(double x);

/* ==========================
   Side Length Functions
   ========================== */

double deg_opp(double hypotenuse, double theta);
double deg_adj(double hypotenuse, double theta);
double deg_hyp(double opp, double adj);

/* ==========================
   Vector Functions
   ========================== */

double deg_vectorX(double length, double degrees);
double deg_vectorY(double length, double degrees);
double deg_vectorZ(double length, double phi);

vector2d deg_vector2d(double length, double degrees);
vector3d deg_vector3d(double length, double theta, double phi);

/* ==========================
   Utility Functions
   ========================== */

double deg_normalize(double deg);

#endif /* DEGTRIG_H */