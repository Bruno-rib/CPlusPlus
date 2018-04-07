// pearson c++ how to program 9th edition -- homework 6.30 (reverse digits)
#include <iostream>
#include <iostream>
using namespace std;

long int n;
long int a [16];
void input ();
void sep ();

int main () {
    input ();
    sep ();
}

void input () {
    cout << "Please enter an integer so digits can be swaped: \t";
    cin >> n;
} 

void sep () {
    for (int i = 1; i < 16; i++) {
        a [i] = n % 10;
        n /= 10;
    }
    for (int i = 1; i < 16; i++) {
        if (a [i] != 0) {
            cout << a [i];
        }
    }
    
}