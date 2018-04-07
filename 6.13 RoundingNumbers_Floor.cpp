// pearson c++ how to program 9th edition -- homework 6.13 (Rounding Numbers)
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double numbers[50];
    int i = 0;
    
    while (numbers[i - 1] != -1) {
        cout << "Enter number " << i + 1 << " to be rounded (-1 to quit): \t";
        cin >> numbers[i];  
        i++;
    }
    
    cout << "\nNumber\tRounded\n";
    
    for (int j = 0; j < i - 1; j++) {
        cout << numbers[j] << "\t" << floor(numbers[j] + 0.5) << endl;
    }
    
}

