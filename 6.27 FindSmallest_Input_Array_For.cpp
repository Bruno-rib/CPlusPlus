// pearson c++ how to program 9th edition -- homework 6.27 (Find the Minimum)
#include <stdio.h>
#include <iostream>
using namespace std;

double m [50];
int j = 1;
int i = 1;
double x = 0;
void min ();
void input ();
int print ();

int main()
{
    input ();
    min ();
    print ();
}

void input () {
    cout << "please enter rational numbers to be compared (-1 to quit): \n";
    cin >> m [0];
    while (m [j - 1] > 0) {
        cin >> m [j];
        j++;
    }
}

void min () {
    for (; i < j - 1; i++) {
        if (m [i - 1] < m [i]) {
            x = m [i];
            m [i] = m [i - 1];
            m [i - 1] = x;
        }
    }
}

int print () {
    cout << "Smallest number is: \t" << m[i- 1] << endl;
}