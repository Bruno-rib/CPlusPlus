// pearson c++ how to program 9th edition       -- part c)     homework 4.34 (Factorial)The factorial of a nonnegative
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n = 0;           // number input
    double f =0;            // variable to solve each factorial
    double i = 1;           // counter for loop
    double p = 1;           // holds products to solve factorial
    double r = 1;           // what we are trying to find
    double e = 1;           // exponent

    
    cout << "Please enter Euler's constant exponent: \te^";
    cin >> e;
    
    double ep = e;          // holding the product of powers of exponent
    
    cout << "Please enter the desired accuracy on decimals: \t";
    cin >> n;
    
    while (i < n + 2) {                                 
        
        f = i;                                          // solve factorial for each loop
        p = 1;                                          // resets p to be used repeatedly
        
        if (f == 0 || f == 1) {                         // solve factorial function
        } else {
            while (f != 0) {
                p *= f;
                f--;
            }
        }
        
        r = r + (ep / p);                                  // formula to solve Euler's constant
        ep *= e;                                         // top part of formula (solving exponents with each loop)
        i++;
    }
    
    cout << setprecision (n) << fixed;
    cout << r << endl;
    
    
}

