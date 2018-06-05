// pearson c++ how to program 9th edition -- Homework 6.41 (Recursive Greatest Common Divisor)
#include <iostream>
#include <stdio.h>
using namespace std;

int i = 0;
int gcd (int, int);

int main()
{
    cout << "\nGreatest Common Divisor is: " << gcd (1000, 768) << endl;
}

int gcd (int x, int y) {
    if (y == 0) {
        cout << "counter: " << i << "\tx: " << x << "\ty: " << y << endl;
        return x;
    }
    cout << "counter: " << i << "\tx: " << x << "\ty: " << y << "\tmodulus: " << x % y << endl;
    i ++;
    return gcd (y, x % y);
}
