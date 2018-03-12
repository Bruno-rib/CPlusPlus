// pearson c++ how to program 9th edition       --part a)     homework 4.34 (Factorial)The factorial of a nonnegative
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n = -1;
    int p = 1;
    
    cout << "Please enter an integer to be factored: \t";
    while (n < 0) {
        cin >> n;
        if (n < 0) {
            cout << "please input a valid number: \t";
        }
    }

    cout << n << "! =\t";

    if (n == 0 || n == 1) {
    } else {
        while (n != 0) {
            p *= n;
            n--;
        }
    }
    
    cout << p << endl;
}
