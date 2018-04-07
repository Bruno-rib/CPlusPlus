// pearson c++ how to program 9th edition -- homework 6.32 (Quality Points for Numeric Grades)
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

unsigned int sum = 0;
unsigned int av = 59;
unsigned int grades[10];
unsigned int g = 0;
void r ();
void qualityPoints ();

int main()
{
    r ();
    qualityPoints ();
}

void r () {
    default_random_engine engine (static_cast < unsigned int> (time (0)));
    uniform_int_distribution <unsigned int> randomInt (50, 100);
    for (unsigned int counter = 0; counter < 10; ++counter) {
        grades [counter] = randomInt (engine);
        if (grades [counter] < 90) {
            grades [counter] = randomInt (engine);
        }
        sum += grades [counter];
    }
    av = sum / 10;
}

void qualityPoints () {
    cout << "All grades are:\n";
    for (int i = 0; i < 10; i++) {
        cout << grades [i] << "\t";
    }
    cout << "\n\n";
    cout << "The average is: \t" << av;
    cout << "\nYour qualityPoint is: \t";
    if (av >= 90)   
        cout << 4;
        else if (av >= 80)
        cout << 3;
        else if (av >= 70)
        cout << 2;
        else if (av >= 60)
        cout << 1;
        else
        cout << 0;
}




