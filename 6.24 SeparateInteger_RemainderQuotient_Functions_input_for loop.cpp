// pearson c++ how to program 9th edition -- homework 6.24 (separating digits)
#include <iostream>
#include <iostream>
using namespace std;

int a, b, q, r, i;
int x = 100000;
int digits [5];
int quot (int, int);
int rem (int, int);
void input ();
void calc();

int main()
{
    input ();
    calc();
}

void calc () {
    for (int j = 0; j < 5; j++) {
        digits [j] = rem (i, x);                             // excludes digit already recorded
        digits [j] = quot (digits [j], quot (x, 10));       // separate the most left digit and record
        x /= 10;  
        if (digits [j] != 0) {
            cout << digits [j] << "  ";
        }
    }
}

void input () {
    cout << "Please enter an integer(1 - 32767): \t";
    cin >> i;
}

int quot (int a,int b) {
    q = a / b;
    return q;
}

int rem (int a, int b) {
    r = a % b;
    return r;
}