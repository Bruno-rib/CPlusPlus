// pearson c++ how to program 9th edition       --     homework 4.28 (Checkerboard Pattern of Asterisks) Write a program

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int j = 0;
    
    while (i < 8) {
        
        while (j < 16) {
            
            if ((j + i) % 2 == 0)
                cout << "*";
            else
                cout << " ";
                
            j++;
        }
        
        cout << endl;
        i++;
        j = 0;
    }
}



