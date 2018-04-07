// pearson c++ how to program 9th edition       --     homework 5.12 (Drawing Patterns with Nested for Loops) Write
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    
    for (int i = 0; i < 10; i++) {                      //each loop is a triangle
        for (int j = 0; j  < 10; j++) {
            
            if (j <= i) {
                cout << '*';
            } else {
                cout << ' ';                            // necessary to print spaces for tab to work
            }
        }
        
        x = 0;                                          //set for a tab between triangles                      
        
        for (int j = 10; j >= 0; j--) {
            if (x == 0) {                               //checks for a tab space
                cout << "\t";                           //only once per loop
                x = 1;
            } else {
                if (j >= i) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            }
        }
        
        x = 0;
            
        for (int j = -1; j  < 10; j++) {
            if (x == 0) {
                cout << "\t";
                x = 1;
            } else {
                if (j >= i) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            } 
        }
        
        x = 0;
        
        for (int j = 10; j >= 0; j--) {
            if (x == 0) {
                cout << "\t";
                x = 1;
            } else {
                if (j <= i) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            }    
            
        }
        
        cout << endl;
    }
}


