// pearson c++ how to program 9th edition -- Homework 6.17 (Random Numbers)
// a + rand() % b) * c + d  a=(X1-d)/c b=sampleSize c=difference of (Xn - X(n-1)) d=offFactor
#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   
    int seed = 0;
    cout << "Enter seed:\t";
    cin >> seed;
    srand (seed);
    
    cout << "random number among 2,4,6,8,10 is: \t" << (1 + rand() % 5) * 2 << endl;
    cout << "random number among 3,5,7,9,11 is: \t" << (1 + rand() % 5) * 2 + 1 << endl;
    cout << "random number among 6,10,14,18,22 is: \t" << (1 + rand() % 5) * 4 + 2 << endl;
}
