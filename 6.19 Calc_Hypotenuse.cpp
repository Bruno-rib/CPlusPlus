// pearson c++ how to program 9th edition       --     homework 6.19 (Hypotenuse Calculations)

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

double findHyp ();
double sidesX[50];
double sidesY[50];
double sidesZ[50];


int main()
{   
    findHyp();
}

double findHyp () {
    
    int x = 0;
    for (int i = 0; i < 50; i++) {
        cout << "Please enter sides for triangle (-1 twice to quit)" << i + 1 <<  ": \t";
        cin >> sidesX [i] >> sidesY [i];
        if (sidesX [i] > 0 && sidesY [i] > 0) {
            sidesZ [i] = sqrt (sidesX [i] * sidesX [i] + sidesY [i] * sidesY [i]);
        } else {
            x = i;
            i = 100;
        }
    }
    
    cout << "\nTriangle\tSide 1\tSide 2\tHypotenuse" << endl;
    for (int j = 0; j < x; j++) {
        cout << j + 1 << "\t\t" << sidesX [j] << "\t" << sidesY [j] << "\t" << sidesZ [j] << "\t" << endl;
    }
}

