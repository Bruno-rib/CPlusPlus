// pearson c++ how to program 9th edition       --     homework 6.20 (Multiples)

#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int findHyp ();
int sidesX[50];
int sidesY[50];
int p;
bool sidesZ[50];


int main()
{   
    findHyp();
}

int findHyp () {
    
    int x = 0;
    for (int i = 0; i < 50; i++) {
        cout << "Please enter integers (-1 twice to quit) " << i + 1 <<  ": \t";
        cin >> sidesX [i] >> sidesY [i];
        if (sidesX [i] > 0 && sidesY [i] > 0) {
            sidesZ [i] = (sidesX [i] % sidesY [i] == 0);
        } else {
            x = i;
            i = 100;
        }
    }
    
    cout << "\nCheck \tN 1\tN 2\tMultiple?" << endl;
    for (int j = 0; j < x; j++) {
        cout << boolalpha;
        cout << j + 1 << "\t" << sidesX [j] << "\t" << sidesY [j] << "\t" << sidesZ [j] << "\t" << endl;
    }
}
