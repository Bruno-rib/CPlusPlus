// pearson c++ how to program 9th edition       --     homework 4.37 (World Population Growth) World population has
#include <stdio.h>
#include <iostream>
#include <iomanip>;
using namespace std;


int main()
{
    int p = 7400;       //population in millions
    int y = 2018;       //year
    int j = 1;              // true or false for double value check
    int s, s1 = 0;          // subtraction tracker
    
    cout << "Year: \t Population \t Difference prior year\n";
    cout << "\t (in millions):  (in millions): \n\n";
    
    for (int i = 0; i < 75; i++) {
        y++;
        s1 = p;
        p += 7400 * 0.017;               //0.67 is ideal but 1.12 is for 2017. Higher number required to make population double
        s = p - s1;
        cout << y << "\t  " << p << "\t\t" << s << endl;
        
        if (j == 1) {
            if (p > 14800) {
                j = 0;
                cout << "****POPULATION HAS DOUBLED****" << endl;
            }
        }
        
    }
    
}
