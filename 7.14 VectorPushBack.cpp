/******************************************************************************

7.14 (Duplicate Elimination with vector) Reimplement Exercise 7.13 using a vector. Begin
with an empty vector and use its push_back function to add each unique value to the vector

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

vector <int> a(0);
void input ();
void print ();

int main()
{
    input ();
    print ();
}

void input () {
    int x = 0;
    for (int i = 0; i < 20; i++) {
        bool z = true;
        cout << "Please enter an integer between 10 and 100:" << endl;
        cin >> x;
        
        for (int j = 0; j < i; j++) {
            if (x == a [j]) {
                cout << "Number already recorded... try again" << endl;
                z = false;
                i--;
            } 
        }
        if (z) 
            a.push_back (x);
    }
}

void print () {
    for (auto i : a) {
            cout << i << ' '; 
    }
}

