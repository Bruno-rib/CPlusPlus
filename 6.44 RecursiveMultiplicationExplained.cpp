// pearson c++ how to program 9th edition -- Homework 6.44 What does the

//******this is a multiplication function using recursion

#include <stdio.h>
#include <iostream>
using namespace std;

int x = 0;
int y = 0;
int j = 0;
int sum = 0;
int mystery (int, int);

int main()
{
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "The result is: " << mystery (x, y) << endl;
}

int mystery (int a, int b) {
    if (1 == b) {
        sum += a;
        cout << "repetition:\t" << j << "\tTimes a were summed up: " << sum << "\tb value: " << b << endl;
        return a;
    } else {
        sum += a;
        cout << "repetition:\t" << j << "\tTimes a were summed up: " << sum << "\tb value: " << b << endl;
        j ++;
        return a + mystery (a, b - 1);
    }
}

