// pearson c++ how to program 9th edition       --     homework 5.9 (Product of odd integers) Write
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int p = 1;
    
    for (int i = 1; i < 16; i++) {
        if ((i % 2) == 1) {
            p *= i;
        }
    }
    
    cout << "The product of odd integers from 1 to 15 is: \t" << p << endl;
}
