// pearson c++ how to program 9th edition       --     homework 4.33 (Sides of a Right Triangle)

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   
    int j = 0;
    double sides [4] = {0, 0, 0, 0};
    cout << "Enter sides (m): \n";
    
    for (int i=0; i<3; i++){
        cin >> sides [i];
        if (sides [i] <= 0) {
            cout << "Please enter a valid number \t";
            i--;
        }
    }
    
    cout << endl;
    
    for (int i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (sides [i] < sides [j]) {
                sides [3] = sides [i];                     //sides [3] is just a temporary holder
                sides [i] = sides [j];
                sides [j] = sides [3];
            }
        }
    }

    if (sides [0] + sides [1] > sides [2])  {              // the sum of smaller sides have to exceed largest
        if (sides [2] * sides [2] == sides [0] * sides [0] + sides [1] * sides [1])
            cout << "You got yourself a right triangle!!";
        else 
            cout << "This is not a right triangle...";
    }
    else
        cout << "The lengths of these sides are not enough to make a triangle" << endl;
}

