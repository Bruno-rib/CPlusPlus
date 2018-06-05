// pearson c++ how to program 9th edition -- Homework 6.43 What's wrong with
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int c = 0;
    if ((c = cin.get()) != EOF)
    {
        cout << c;   //if you call main recursively first 
        main ();    // you will never reach commands under it
    }
}
