// pearson c++ how to program 9th edition -- homework 5.32 (Facebook User Base Growth) There
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int year = 2012;
    float rate = 0.02;
    float interest[4] = {1000000, 1000000, 1000000, 1000000};
    
    for (int i = 0; i < 4; i++) {
        rate += i * 0.01;
        for (year; interest[i] < 2500000; year++) {
            interest[i] += interest[i] * (rate);
        }
        
        cout << setprecision (2) << fixed;
        cout << rate << "% rate Facebook will cross 2.5 billion user in the year: \t" << year << endl;
        year = 2012;
        rate = 0.02;
    }
}
