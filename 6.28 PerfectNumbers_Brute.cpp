// pearson c++ how to program 9th edition -- homework 6.28 (Perfect Numbers)
#include <stdio.h>
#include <iostream>
using namespace std;

int isPerfect ();
int l = 0;
int sum = 0;
int z [10];

int main()
{
    isPerfect ();    
}

int isPerfect () {
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum == i) {
            z [l] = sum;
            l++;
        }
        sum = 0;
    }
    
    for (int i = 0; i < l; i++) {
        cout << z [i] << endl;
    }
}
