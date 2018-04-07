// pearson c++ how to program 9th edition -- Homework 6.18 (Exponentiation)
#include <stdio.h>
#include <iostream>
using namespace std;

int integerPower (int, int);
int base, exponent;

int main()
{
    cout << "Enter base followed by exponent:\t";
    cin >> base >> exponent;
    cout << base << " to the power of " << exponent << " is equal to: \t" << integerPower (base, exponent);
}

int integerPower (int base, int exponent) {
    int answer = 1;
    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    return answer;
}
