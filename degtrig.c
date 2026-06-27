#include <math.h>
#include "degtrig.h"

//essential macros 
#define PI 3.141592653589
#define getrad (PI / 180.0) //coefficient to convert degrees to radians
#define getdeg (180.0 / PI) //coefficient to convert radians to degrees


//the purpose of this function library is to enable 
//trigonometry calculations using degrees of a 360 circle.
//It generates data to
//use in your calculations.

//I made unit conversion functions and other 
//easy trig functions to streamline your code.
 

//rad is short for radians
//deg is short for degrees 

//every number is in double float format. format specifier will be %lf

//sections are divided by === lines. 
//sections: conversion, 6 trig, 6 inverse, vectors, and extra




//============================================================================
//unit conversion

//input degrees and get radians
double find_radians(double degrees){
    return degrees * getrad;
}

//input radians and get degrees
double find_degrees(double radians){
    return radians * getdeg;
}

//================================================================
//the 6 ratios

//tan with degrees
double deg_tan(double deg){
    return tan(deg * getrad);
}

//sin with degrees
double deg_sin(double deg){
    return sin(deg * getrad);
}

//cos with degrees
double deg_cos(double deg){
    return cos(deg * getrad);
}

//secant with degrees
double deg_sec(double deg){
    return 1.0 / (cos(deg * getrad));
}

//cosecant with degrees
double deg_cosec(double deg){
    return 1.0 / (sin(deg * getrad));
}

//cotangent with degrees
double deg_cotan(double deg){
    return 1.0 / (tan(deg * getrad));
}

//===========================================================
//the 6 inverse functions, returning a degree value using a ratio

//inverse tangent
double deg_atan(double x){
    return atan(x) * getdeg;
}

//inverse sine
double deg_asin(double x){
    return asin(x) * getdeg;
}

//inverse cosine
double deg_acos(double x){
    return acos(x) * getdeg;
}
//inverse secant
double deg_asec(double x){
    return acos(1.0 / (x)) * getdeg;
}
//inverse cosecant
double deg_acosec(double x){
    return asin(1.0 / (x)) * getdeg;
}
//inverse cotangent
double deg_acotan(double x){
    return atan(1.0 / (x)) * getdeg;
}

//==================================================================
//vector functions 

//finds an polar X vector magnitude (horizontal leg of the right triangle)
double deg_vectorX(double length, double degrees){
    return length * deg_cos(degrees);
}
//finds a polar Y vector magnitude (vertical leg of the right triangle)
double deg_vectorY(double length, double degrees){
    return length * deg_sin(degrees);
}
//finds a polar z vector magnitude (input the phi value in degrees)
double deg_vectorZ(double length, double phi){
    return length * deg_sin(phi);
}
//makes vector coordinates, using length and theta in degrees
vector2d deg_vector2d(double length, double degrees){
   vector2d v;
    v.x = deg_vectorX(length, degrees);
    v.y = deg_vectorY(length, degrees);
    return v;
}

//intakes the length, theta in degrees, and phi in degrees to make the coordinates of a 3d vector
vector3d deg_vector3d(double length, double theta, double phi){
   vector3d v;
    v.x = deg_vectorX(length, theta);
    v.y = deg_vectorY(length, theta);
    v.z = deg_vectorZ(length, phi);
    return v;
}

//===============================================================
//extra functions

//normalize an angle to simplify it. In degrees.
//its not required for the above functions to work
double deg_normalize(double deg){
    deg = fmod(deg, 360.0);

    if(deg < 0){
        deg += 360.0;
    }

    return deg;

    }
