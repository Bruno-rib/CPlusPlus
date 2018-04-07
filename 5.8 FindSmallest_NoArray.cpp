// pearson c++ how to program 9th edition       --     homework 5.8 (Find the Smallest Integer) Write
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int l = 0;      //size of sample
    int s = -1;      // smallest
    int n = 0;          //numbers to be evaluated
    int n1 = 0;         //temporary for swap
    
    cout << "please enter amount of numbers to be evaluated: \t";
    cin >> l;
    
    cout << "Enter numbers (integers positive): \n";
    
    for (int i = 0; i < l; i++) {
        
        cin >> n;
        
        if (s == -1) {
            s = n;
        }
            
        if (s > n) {
            n1 = n;
            n = s;
            s = n1;
        }
    }
    
    cout << "smallest number is: \t" << s << endl;
    
}

