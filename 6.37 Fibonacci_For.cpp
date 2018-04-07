// pearson c++ how to program 9th edition -- Homework 6.37 (Fibonacci Series: Iterative Solution)
#include <stdio.h>
#include <iostream>
using namespace std;

int x;
int r;
int s [100];
int fib ();
void input ();

int main()
{
    input ();
    cout << "Fibonacci [" << x << "] = " << fib ();
}

void input () {
    cout << "Please enter integer to be evaluated: \t";
    cin >> x;
}

int fib () {
    s [0] = 0;
    s [1] = 1;
    
    for (int i = 2; i < x + 1; i++) {
        s [i] = s [i - 1] + s [i - 2];
    }
    
    r = s [x];
    return r;
}
