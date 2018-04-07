// pearson c++ how to program 9th edition       --     homework 6.21 (Even Numbers)
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int user ();
int printAll ();
int x;
bool y;

int main()
{
    user ();
    printAll ();
}

int user () {
    cout << "Please input how many numbers you want to print: \t";
    cin >> x;
    cout << "Number:\t isEven:" << endl;
}

int printAll() {
    cout << boolalpha;
    for (int i = 0; i < x; i++) {
        y = (i + 1) % 2 == 0;
        cout << i + 1 << "\t" << y << endl;
    }
}