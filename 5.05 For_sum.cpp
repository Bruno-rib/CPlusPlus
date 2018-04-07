// pearson c++ how to program 9th edition       --     homework 5.5 (Summing Integers) Write a program
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n = 0;      //numbers to be summed
    int x = 0;      // each summed number
    int s = 0;      // sum
    
    cout << "Please enter how many numbers will be added: \t";
    cin >> n;
    cout << "Now enter numbers to be summed:" << endl;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        s += x;
    }
    
    cout << "The result is: \t" << s << endl;
}
