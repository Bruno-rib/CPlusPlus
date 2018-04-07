// pearson c++ how to program 9th edition       --     homework 5.11 (Compound Interest) Modify the
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double amount;
    double principal = 1000.0;
    double rate= .05;
    
    for (rate = .05; rate <=.1; rate += .01) {
        cout << "Year" << setw(21) << "Amount on deposit \t rate = " << rate*100 << "%" << endl;
        cout << fixed << setprecision(2);
        
        for (unsigned int year = 1; year <= 10; ++year) {
            amount = principal * pow(1.0 + rate, year);
            cout << setw(4) << year << setw(21) << amount << endl;
        }
        
        cout << endl;
    }
}
