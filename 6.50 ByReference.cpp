// pearson c++ how to program 9th edition -- Homework 6.50 (Pass-by-Value vs. Pass-by-Reference)
#include <stdio.h>
#include <iostream>
using namespace std;

int tripleByValue (int);
void tripleByReference (int &);


int main()
{
    int x = 2;
    
    cout << tripleByValue (x) << endl;
    cout << x << endl;
    tripleByReference (x);
    cout << x;
}

int tripleByValue (int n) {
    return n *= 3;
}

void tripleByReference (int &nRef) {
    nRef *= 3;
}