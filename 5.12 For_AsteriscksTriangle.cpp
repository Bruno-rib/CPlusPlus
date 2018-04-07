// pearson c++ how to program 9th edition       --     homework 5.12 (Drawing Patterns with Nested for Loops) Write
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++) {              // each for loop represents a triangle
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j >= i) {
                cout << '*';
            } else 
                cout << ' ';
        }
        cout << endl;
    }
    
    cout << endl;

    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < 10; j++) {
            if (j >= i) {
                cout << '*';
            } else 
                cout << ' ';
        }
        cout << endl;
    }
    
}
