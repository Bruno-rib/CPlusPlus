// pearson c++ how to program 9th edition       --     homework 5.19 (Calculating Pi) Calculate the value
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
        
    double pi = 0;     //sum of total
    double ft = 4;               //numerator
    double fb = 1;              //denominator
    
    cout << "     Term:\tCurrent pi:" << endl;
    for (int i = 0; i < 10000; i++) {
        pi += ft/fb;
        ft *= -1;
        fb += 2;
        cout << "\t" << i << "\t" << pi << endl;
    }
}

