// pearson c++ how to program 9th edition -- homework 6.12 (Parking charges)
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

double fee (double);

int main()
{
    int hours[3];
    int sumH = 0;
    int sumC = 0;
    cout << setprecision (2) << fixed;
    
    for (int i = 0; i < 3; i++) {
        cout << "Please enter hours parked for customer number " << i + 1 << ":\t ";
        cin >> hours [i];
        sumH += hours [i];
    }
    
    cout << "\nCar" << setw(10) << "Hours" << setw(10) << "Charge" << endl;
    
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << setw(12) << hours[i] << setw(10) << fee (hours[i]) << endl;
        sumC += fee (hours[i]);
    }
    
    cout << "Total" << setw(8) << sumH << setw(10) << sumC << endl;
}

double fee (double h) {
    if (h < 3) {
        return 2;
    } else if (h < 24) {
        return (2 + (h - 3) * 0.5);
    } else {
        return 10;
    }
}

