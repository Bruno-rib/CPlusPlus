// pearson c++ how to program 9th edition       --     homework 5.6 (Averaging Integers) Write a program
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x = 0;          // input numbers
    int s = 0;          //hold sum
    int r = 0;          // hold result
    
    cout << "Enter integers to be averaged: \t";
    
    for (int i = 0; x != 9999; i++) {
        cin >> x;
            if (x != 9999) {
                s += x;
                r = s / (i + 1);
            }
    }
    
    cout << "The average is: \t" << r << endl;
}
