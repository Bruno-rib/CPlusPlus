// pearson c++ how to program 9th edition -- homework 6.28 (Perfect Numbers)
#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int isPrime ();
int l = 2;
int s = 0;
int z [10000];

int main()
{
    isPrime ();    
}

int isPrime () {
    for (int i = 3; i < 10000; i += 2) {
        for (int j = 3; j < i / 2; j += 2) {
            if (i % j == 0) {
                s = 1;
            }
        }
        if (s == 0) {
            z [l] = i;
            l++;
        }
        s = 0;
    }
    
    z [1] = 2;
    for (int i = 1; i < l; i++) {
        cout << z [i] << "\t";
        if (i % 10 == 0) {
            cout << endl;
        }
    }
    
    cout << "\n\n" << l-1 << endl;
}
