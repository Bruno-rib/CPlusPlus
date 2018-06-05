// pearson c++ how to program 9th edition -- Homework 6.49 (Circle Area) Write a C++ program that prompts 
//the user for the radius of a circle, then calls
//inline function circleArea to calculate the area of that circle.
#include <iostream>
#include <stdio.h>
using namespace std;

double input ();
inline double circleArea (double);

int main()
{
    cout << "Radius is " << circleArea (input ());
}

inline double circleArea (double x) {
    return 3.1415 * x * x; 
}

double input () {
    int r = 0;
    cout << "Please enter the radius: ";
    cin >> r;
    return r;
}