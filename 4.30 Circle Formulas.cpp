// pearson c++ how to program 9th edition       --     homework 4.30
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    double r;
    double pi = 3.14159;
    double c;
    double a;
    
    cout << "Please enter the radius of the circle (m): \t";
    cin >> r;
    cout << endl;
    
    c = 2 * pi * r;
    a = pi * r * r;
    
    cout << setprecision (2) << fixed;
    cout << "radius: \t" << "Diameter: \t"<< "Circumference: \t\t" << "Area: " << endl;
    cout << r << " m\t\t" << 2*r << " m\t\t" << c << " m\t\t\t" << a << " m^2" << endl;
    
    
}
