// pearson c++ how to program 9th edition -- homework 6.25 (Calculating Number of Seconds)
#include <stdio.h>
#include <iostream>
using namespace std;

int t [9];
void input ();
void calculate ();

int main()
{
    input ();
    calculate ();
}

void input () {
    cout << "Please enter first time (hour(<12) minute seconds): \t";
    cin >> t [0] >> t [1] >> t [2];
    cout << "Please enter second time (hour(<12) minute seconds): \t";
    cin >> t [3] >> t [4] >> t [5];
}

void calculate () {
        t [0] *= 3600;
        t [3] *= 3600;
        t [1] *= 60;
        t [4] *= 60;
        t [6] = t [0] + t [1] + t [2];
        t [7] = t [3] + t [4] + t [5];
        
        if (t [6] > t [7]) {
            t [9] = t [6] - t [7];
        } else {
            t [9] = t [7] - t [6];
        }
        cout << t[9];
}