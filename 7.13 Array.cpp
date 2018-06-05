/******************************************************************************

7.13 (Duplicate Elimination with array) Use a one-dimensional array to solve the following
problem. Read in 20 numbers, each of which is between 10 and 100, inclusive. As each number is
read, validate it and store it in the array only if it isn’t a duplicate of a number already read. After
reading all the values, display only the unique values that the user entered. Provide for the “worst
case” in which all 20 numbers are different. Use the smallest possible array to solve this problem

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

array <int, 20> a;
void input ();
void print ();

int main()
{
    input ();
    print ();
}

void input () {
    int x = 0;
    for (size_t i = 0; i < a.size(); i++) {
        cout << "Please enter an integer between 10 and 100:" << endl;
        cin >> x;
        a[i] = x;
        for (int j = 0; j < i; j++) {
            if (x == a [j]) {
                cout << "Number already recorded... try again" << endl;
                i--;
            } 
        }
    }
}

void print () {
    for (auto i : a) {
            cout << i << ' '; 
    }
}

