// pearson c++ how to program 9th edition -- Homework 6.34 (Guess-the-Number Game)
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int c = 1;
int n;
int y;
char x = 'y';
void r();
void display ();

int main()
{
    while (x == 'y') {
    r ();
    display ();
    cout << "\n\nWould you like to play again (y or n)?\n";
       cin >> x;
       c = 1;
    }
}

void display () {
    cout << "I have a number between 1 and 1000. \nCan you guess my number?\nPlease type your first guess:\n";
    cin >> n;
    
    while (y != n) {
        if (y > n) {
            cout << "2. Too low. Try again.\n";
        } else {
            cout << "3. Too high. Try again.\n";
        }
        cin >> n;
        c++;
    }
    cout << "1. Excellent! You guessed the number!";
    cout << "\nNumber of guesses: " << c << endl;
    if (c < 10) {
        cout << "Either you know the secret or you got lucky!";
    } else if (c  == 10) {
        cout << "Ahah! You know the secret!";
    } else if (c > 10) {
        cout << "You should be able to do it better!";
    }
}

void r () {
    default_random_engine engine (static_cast < unsigned int> (time (0)));
    uniform_int_distribution <unsigned int> randomInt (1,1000);
    
    for (unsigned int counter = 1; counter <= 25; ++counter) {
        y = randomInt (engine);
    }
}

