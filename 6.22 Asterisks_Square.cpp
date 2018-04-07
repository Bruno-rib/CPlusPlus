// pearson c++ how to program 9th edition       --     homework 6.22 (Square of Asterisks)
#include <stdio.h>
#include <iostream>
using namespace std;

int size;
int user ();
int square ();

int main()
{
    user ();
    square();
}

int user () {
    cout << "Please enter sides of square: \t";
    cin >> size;
    cout << "\n\n";
}

int square () {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << '*';
        }
        cout << endl;
    }
}




