// pearson c++ how to program 9th edition       --     homework 6.23 (Square of Any Character)
#include <stdio.h>
#include <iostream>
using namespace std;

string fillCharacter;
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
    cout << "\nPlease enter character to use: \t";
    cin >> fillCharacter;
    cout << "\n\n";
    
}

int square () {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << fillCharacter;
        } 
        cout << endl;
    }
}





