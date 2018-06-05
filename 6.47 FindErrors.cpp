// pearson c++ how to program 9th edition -- Homework 6.47 (Find the Error)
#include <stdio.h>
#include <iostream>
#include <cstdlib> // for b)
using namespace std;

int randomNumber = rand();  // b) srand() is to define seed, random number is rand() only
int sum (int);
float cube (float);

double square (double); // no need to solve d) I just want to keep my functions together under main

float y = 123.45678;
int x;              // c) x need be declared float to receive decimal from y

int main()
{
    cout << cube (3) << endl;
    
    cout << randomNumber << endl;
    
    x = y;
    cout << x << endl;
    
    cout << square (2) << endl;
    
    cout << sum (5);
}

//problem a) add "float" at the beginning of function defition
float cube (float number) {
    return (number * number * number);
}

double square (double number) {
    //double number = 0; //d) number was already declared as a function parameter. Remove this line to fix it
    return number * number;
}

int sum (int n) {
    if (0 == n)
    return 0;
    else
    return n + sum (n - 1); // e) recursive infinite loop. n wont ever be zero if we don't subtract a value on each repetition
}                           // this program is to sum all integers from 0 to n