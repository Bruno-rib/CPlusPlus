// pearson c++ how to program 9th edition -- homework 5.29 (Peter Minuit Problem) Legend has
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int year = 0;
    float rate = 0.05;
    float interest[6] = {24, 24, 24, 24, 24, 24};                
    
    for (year = 1626; year < 2019; year ++) {
        for (int i = 0; i < 5; i++) {
            interest[i] += interest[i] * (rate + i * 0.01);
        }
    }
    
    for (int i = 0; i < 5; i++) { 
        cout << year << "\t";
        cout << setprecision(2) << fixed;
        cout << interest[i] << "\n\n";
    }
    
    
    ///or another program written withouth repetition acording to figure 5.16
    cout << "Second program: \n\n";

    int y = 393;
    float r = 0.05;
    float interest2[6] = {24, 24, 24, 24, 24, 24};                
    
    for (int i = 0; i < 5; i++) {
        interest2[i] = interest2[i] * pow (1.0 + r + i * 0.01, y);
    }

    for (int i = 0; i < 5; i++) { 
        cout << y << "\t";
        cout << setprecision(2) << fixed;
        cout << interest2[i] << "\n\n";
    }
}

