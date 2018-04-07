// pearson c++ how to program 9th edition       --     homework 5.13 (Bar Chart) One interesting application
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int chart[5];

    for (int i = 0; i < 5; i++) {
        cout << "\n\nEnter number (then press enter): " << endl;
        cin >> chart[i];
        
        for (int j = 0; j < chart[i]; j++) {
            cout << '*';
        }
    }
}
