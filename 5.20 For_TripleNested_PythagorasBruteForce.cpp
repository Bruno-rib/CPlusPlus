// pearson c++ how to program 9th edition       --     homework 5.20 (Pythagorean Triples) A right triangle

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   
    cout << "Solutions for a pythagorean triangle \n   side1:   side2:   Hypotenuse: \n";
    for (int s1 = 1; s1 < 501; s1++) {
            for (int s2 = 1; s2 < 501; s2++) {
                    for (int h = 1; h < 501; h++) {
                        if ((s1 * s1 + s2 * s2) == (h * h)) {
                            cout << "\t" << s1 << "\t" << s2 << "\t" << h << "\n";
                        }
                    }
            }
    }
}


