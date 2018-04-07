// pearson c++ how to program 9th edition -- Homework 6.16 (Random Numbers)
// x <= n <= z     minRange= x maxRange= z + 1 - x  formula = (minRange + rand() % maxRange)
#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    /*for (unsigned int counter = 1; counter <= 300; counter++) {
        cout << (-3 + rand() % 15) << "\t";                 //copy and paste formula here
            if (counter % 10 == 0) {
                cout << endl;                               //take comment out to test formulas
            }
    }*/
    
    int seed = 0;
    cout << "Enter seed:\t";
    cin >> seed;
    srand (seed);
    
    cout << "Random integer on the range of 1 <= n <= 2: \t" << endl;
    cout << (1 + rand() % 2) << endl; 
    cout << "Random integer on the range of 1 <= n <= 100: \t" << endl;
    cout << (1 + rand() % 100) << endl; 
    cout << "Random integer on the range of 0 <= n <= 9: \t" << endl;
    cout << (0 + rand() % 10) << endl; 
    cout << "Random integer on the range of 1000 <= n <= 1112: \t" << endl;
    cout << (1000 + rand() % 113) << endl;
    cout << "Random integer on the range of -1 <= n <= 1: \t" << endl;
    cout << (-1 + rand() % 3) << endl;
    cout << "Random integer on the range of -3 <= n <= 11: \t" << endl;
    cout << (-1 + rand() % 3) << endl;
}
