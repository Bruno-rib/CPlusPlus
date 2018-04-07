// pearson c++ how to program 9th edition -- homework 6.31 (Greatest Common Divisor)
#include <stdio.h>
#include <iostream>
using namespace std;

int x;
int y;
int z;
void input();
void calc();

int main()
{
    input();
    calc();
}

void input() {
    cout << "Please enter 2 integers: \t";
    cin >> x >> y;
}

void calc () {
    for (int i = x; i > 0; i--) {
        if (x % i == 0 && y % i == 0) {
            z = i;
            break;
        }
    }   
    cout << "The common denominator is: " << z;
}




