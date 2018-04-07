// pearson c++ how to program 9th edition -- homework 6.11 Show the value
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << fabs (7.5) << "\t" << floor (7.5) << "\t" << fabs (0.0) << "\t" << ceil (0.0) << endl;
    cout << fabs (-6.4) << "\t" << ceil (-6.4) << "\t" << ceil(-fabs(-8 + floor (-5.5))) << endl;
    
    //fabs = absolute   // ceil = right // floor = left
}
