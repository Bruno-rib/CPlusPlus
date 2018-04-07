// pearson c++ how to program 9th edition -- Homework 6.36 (Recursive Exponentiation)
#include <stdio.h>
#include <iostream>
using namespace std;

int power (int, int);


int main()
{
    cout << power (3, 3);
}

int power (int x, int y){
    if (y != 0) {
        return x * power (x, y - 1);
    } else {
        return 1;
    }
}


