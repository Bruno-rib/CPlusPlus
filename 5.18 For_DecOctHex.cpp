// pearson c++ how to program 9th edition       --     homework 5.18 (Number System Table) Write a
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    cout << "dec:\thex: \toct: \n\n";
    
    for (int i = 1; i < 257; i++) {
        cout << dec << i << "\t" << hex << i << "\t" << oct << i << "\t" << endl;
    }
}
