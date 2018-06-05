/******************************************************************************
// pearson c++ how to program 9th edition -- Homework 

7.11 (One-Dimensional array Questions) Write single statements that perform the following
one-dimensional array operations:
a) Initialize the 10 elements of integer array counts to zero.
b) Add 1 to each of the 15 elements of integer array bonus.
c) Read 12 values for the array of doubles named monthlyTemperatures from the keyboard.
d) Print the 5 values of integer array bestScores in column format.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>
#include <algorithm>
using namespace std;

array <int, 10> counts;
array <int, 4> subs {1, 2, 3, 4};
void init ();
void print ();
void add ();
void input ();

int main()
{
    init ();
    print ();
    add ();
    copy(begin(subs), end(subs), begin(counts));
    print ();
    input ();
    print ();
}

void init () {
    for (auto& i : counts)
        i == 0;
}

void print () {
    for (auto& i : counts) 
        cout << i << ' ';
    cout << endl;
}

void add () {
    for (auto& i : counts) {
        i++;
    }
}

void input () {
    cout << "Please enter 10 integers: " << endl;
    
    for (auto& i : counts) {
        cin >> i;
    }
}