// pearson c++ how to program 9th edition -- homework 5.27 (Removing the continue statement) Describe
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    for (unsigned int count = 1; count <= 10; ++count) {            //original function
        if (count == 5)
            continue;
        
        cout << count << " ";
    }
    
    cout << "\nUsed continue to skip printing 5" << endl;
    
    cout << "\n\n";
    
    for (unsigned int count = 1; count <= 10; ++count) {            //modified function
        if (count == 5) {
            
        } else {
            cout << count << " ";
        }
    }
    
    cout << "\nUsed continue to skip printing 5" << endl;
}
