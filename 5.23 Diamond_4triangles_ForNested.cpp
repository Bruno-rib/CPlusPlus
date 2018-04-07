// pearson c++ how to program 9th edition       --     homework 5.23 (Diamond of Asterisks) Write a program
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    
    for (int i = 0; i < 5; i++) {          //top triangle
        for (int j = 10; j >= 0; j--) {
            if (j <= i) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }

        for (int j = 1; j  < 10; j++) {
            if (j <= i) {
                cout << '*';
            } else {
                cout << ' ';                            
            }
        }
        
        cout << endl;
    }
        
    for (int i = 5; i < 9; i++) {              //bottom triangle
        for (int j = 0; j  < 10; j++) {
            if (j > i + 1) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        
        for (int j = 10; j >= 0; j--) {
            if (j > i + 1) {
                cout << '*';
            } else {
                cout << ' ';
            }
        }
        
        cout << endl;
    }
}



