// pearson c++ how to program 9th edition -- homework 6.26 (Celsius and Fahrenheit temperatures)
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

double c [400];
double f [400];
int ftoC ();
int ctoF ();

int main()
{
    cout << setprecision (0) << fixed;
    ctoF ();
    cout << "\n#######################################################################\n";
    ftoC ();
}

int ctoF () {
    cout << "Celsius to Fahrenheit" << endl;
    cout << "C \t F \t C \tF \t C \tF \t C \tF \t C \tF\n";
    for (int i = 0; i <= 100; i++) {
        c [i] = i;
        f [i] = c [i] * 9 / 5 + 32;                       
    }
    for (int i = 0; i <= 20; i++) {
        for (int j = 0; j < 5; j++) {
            cout << c [i + j * 21] << "\t" << f [i + j * 21] << "\t";
        }
    cout << endl;
    }
}

int ftoC() {
    cout << "Fahrenheit to Celsius" << endl;
    cout << "F\t C \tF \t C \tF \t C \tF \t C \tF \t C\n";
    for (int i = 32; i <= 212; i++) {
        f [i] = i;
        c [i] = (f [i] - 32) * 5 / 9;   
    }
    for (int i = 32; i <= 68; i++) {
        for (int j = 0; j < 5; j++) {
            cout << f [i + j * 37] << "\t" << c [i + j * 37] << "\t";
        }
    cout << endl;
    }
}


