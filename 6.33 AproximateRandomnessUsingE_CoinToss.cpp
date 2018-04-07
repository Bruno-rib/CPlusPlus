// pearson c++ how to program 9th edition -- Homework 6.33 (Coin Tossing)
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

void flip ();

int main()
{
    flip ();
}

void flip () {
    ///////////////////////
    int m = 0;
    int x = 0;
    double y = 1;           //will move sequence over the decimal in order to remove most left digit
    int z = 0;
    bool a [1000];
    int h = 0;
    int t = 0;
    //////////////////////////
    double n = 71;        // number input
    double f =0;            // variable to solve each factorial
    int i = 1;           // counter for loop
    double p = 1;           // holds products to solve factorial
    double r = 1;           // what we are trying to find
    while (m < 3008) {                       //times flipped
        f = i;                                          // solve factorial for each loop
        p = 1;                                          // resets p to be used repeatedly
        if (f == 0 || f == 1) {                         // solve factorial function
        } else {
            while (f != 0) {
                p *= f;
                f--;
            }
        }
        r = r + (y * (1 / p));                                  // formula to solve Euler's constant (added fator y)
        i++;

        
        ////////////////////////////
        if (x == 1) {
            z = (int) r;
            a [i] = z % 2 == 0;
            r = 10 * (r - z);
            if (a [i] == 0) {
                cout << "Heads" << "\t";
                h++;
            }else {
                    cout << "Tails" << "\t";
                    t++;
            }
            if (i % 9 == 0) {
                cout << endl;
            }
        } else if (i % 9 == 0) {
            x = 1;
            y = 10;
            z = (int) r ;
            a [i] = z % 2 == 0;
            r = 10 * (r - a [i]);
        }
        
        if (i == 51) {
            i = 1;
        }
        
        m++;

        /////////////////////////////
    }
    cout << "\n Heads: " << h << "\tTails: " << t;

} 

