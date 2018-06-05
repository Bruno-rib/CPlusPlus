// pearson c++ how to program 9th edition -- Homework 6.46 (Math Library Functions)
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double x = -3.14;
double xx = -3.71;
double y = 2.71;
double yy = 2.14;
double z = -2;

int main()
{
    cout << setprecision (3) << fixed;
    cout << "\tx= " << x << "\txx= " << xx << "\ty= " << y << "\tyy= " << yy << "\tz= " << z << endl;
    cout << "ceil \t" << ceil (x) << "\t\t " << ceil (xx) 
    << "\t\t " << ceil (y) << "\t\t" << ceil (yy) << "\t\t" << ceil (z) << endl;
    cout << "cos \t" << cos (x) << "\t\t " << cos (xx) 
    << "\t\t " << cos (y) << "\t\t" << cos (yy) << "\t\t" << cos (z) << endl;
    cout << "exp \t" << exp (x) << "\t\t " << exp (xx) 
    << "\t\t " << exp (y) << "\t\t" << exp (yy) << "\t\t" << exp (z) << endl;
    cout << "fabs \t" << fabs (x) << "\t\t " << fabs (xx) 
    << "\t\t " << fabs (y) << "\t\t" << fabs (yy) << "\t\t" << fabs (z) << endl;
    cout << "floor \t" << floor (x) << "\t\t " << floor (xx) 
    << "\t\t " << floor (y) << "\t\t" << floor (yy) << "\t\t" << floor (z) << endl;
    cout << "fmod \t" << fmod (x, 2) << "\t\t " << fmod (xx, 2) 
    << "\t\t " << fmod (y, 2) << "\t\t" << fmod (yy, 2) << "\t\t" << fmod (z, 2) << endl;
    cout << "fmod used 2 as denominator" << endl;
    cout << "log \t" << log (x) << "\t\t " << log (xx) 
    << "\t\t " << log (y) << "\t\t" << log (yy) << "\t\t" << log (z) << endl;
    cout << "log10 \t" << log10 (x) << "\t\t " << log10 (xx) 
    << "\t\t " << log10 (y) << "\t\t" << log10 (yy) << "\t\t" << log10 (z) << endl;
    cout << "sin \t" << sin (x) << "\t\t " << sin (xx) 
    << "\t\t " << sin (y) << "\t\t" << sin (yy) << "\t\t" << sin (z) << endl;
    cout << "sqrt \t" << sqrt (x) << "\t\t " << sqrt (xx) 
    << "\t\t " << sqrt (y) << "\t\t" << sqrt (yy) << "\t\t" << sqrt (z) << endl;
    cout << "tan \t" << tan (x) << "\t\t " << tan (xx) 
    << "\t\t " << tan (y) << "\t\t" << tan (yy) << "\t\t" << tan (z) << endl;
    cout << "pow \t" << pow (x, 2) << "\t\t " << pow (xx, 2) 
    << "\t\t " << pow (y, 2) << "\t\t" << pow (yy, 2) << "\t\t" << pow (z, 2) << endl;
    cout << "*power = 2" << endl;
    
}

