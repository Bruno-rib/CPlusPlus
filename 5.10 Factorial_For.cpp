// pearson c++ how to program 9th edition       --     homework 5.9 (Product of odd integers) Write
// factorial of 20 would require more memory than "int" can store
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    unsigned long long p = 1;

    for (int j = 0; j <= 5; j++) {
        for (int i = 1; i <= j; i++) {
            p *= i;
        }
        cout << j << "!  = " << p << endl;
        p = 1;
    }
}

