// pearson c++ how to program 9th edition -- Homework 6.45 After you determine

//******this is a multiplication function using recursion

#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int x = 0;
int y = 0;
int j = 1;
int mystery (int, int);

int main()
{
    cout << "Enter two integers: ";
    cin >> x >> y;
    if (y < 0) {
        y = y * (-1);
        j = -1;
    }
    cout << "The result is: " << j * mystery (x, y) << endl;
}

int mystery (int a, int b) {

    if (1 == b) {
        return a;
    } else {
        return a + mystery (a, b - 1);
    }
}


