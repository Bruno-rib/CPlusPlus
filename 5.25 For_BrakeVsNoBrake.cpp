// pearson c++ how to program 9th edition -- homework 5.25 (Removing break and continue) A criticism
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    unsigned int count;                                  // main program
    for (count = 1; count <= 10; ++count) {
        if (count == 5) {
            break;
        }
        cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << count << endl;
    
    
    cout << "\n\n";
    
    
    for (count = 1; count <= 4; ++count) {               // no break program
        cout << count << " ";
    }
    cout << "\nBroke out of loop at count = " << count << endl;
    
    
}

