// pearson c++ how to program 9th edition -- Homework 6.48 (Craps Game Modification)
#include <stdio.h>
#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime>
using namespace std;

int balance = 1000;
unsigned int wager = 0;

unsigned int rollDice ();
void input ();

int main()
{
    while (balance > 0) {
    input ();
    
    enum Status { CONTINUE, WON, LOST };
    // randomize random number generator using current time
   srand( static_cast<unsigned int>( time( 0 ) ) );
   unsigned int myPoint = 0; // point if no win or loss on first roll
    Status gameStatus = CONTINUE; 
    unsigned int sumOfDice = rollDice(); // first roll of the dice
     // determine game status and point (if needed) based on first roll
    switch ( sumOfDice )
    {
        case 7: // win with 7 on first roll
        case 11: // win with 11 on first roll
            gameStatus = WON;
            break;
        case 2: // lose with 2 on first roll
        case 3: // lose with 3 on first roll
        case 12: // lose with 12 on first roll
            gameStatus = LOST;
            break;
        default: // did not win or lose, so remember point
            gameStatus = CONTINUE;
            myPoint = sumOfDice; // remember the point
            cout << "Point is " << myPoint << endl;
            break; // optional at end of switch
    } // end switch
    // while game is not complete
    while ( CONTINUE == gameStatus ) // not WON or LOST
    {
            sumOfDice = rollDice(); // roll dice again
        // determine game status
        if ( sumOfDice == myPoint ) // win by making point
            gameStatus = WON;
        else if ( sumOfDice == 7 ) // lose by rolling 7 before point
        gameStatus = LOST;
    } // end while
    // display won or lost message
    if ( WON == gameStatus ) {
        balance += wager;
        cout << "Player wins\n" << endl;
        if (balance > 4000) {
            cout << "You're up big. Now's the time to cash in your chips!" << endl;

        }
    } else {
        balance -= wager;
        cout << "Player loses\n" << endl;
        
        if (balance == 0) {
            cout << "Sorry. You busted!" << endl;
        } else if (balance < 300) {
            cout << "Oh, you're going for broke, huh?" << endl;
        }  
    }
    }
} // end main
    

// roll dice, calculate sum and display results
unsigned int rollDice()
{
    // pick random die values
    unsigned int die1 = 1 + rand() % 6; // first die roll
    unsigned int die2 = 1 + rand() % 6; // second die roll
    unsigned int sum = die1 + die2; // compute sum of die values
    // display results of this roll
    cout << "Player rolled " << die1 << " + " << die2
        << " = " << sum << endl;
    return sum; // end function rollDice
} // end function rollDice

void input () {
    int i = 0;
    
    cout << "Your Balance: " << balance << endl;
    
    while (i == 0) {
        cout << "Please enter a wager (=< balance): " << endl;
        cin >> wager;
        cout << endl;
    
        if (balance >= wager) {
            i = 2;
        }
    }
    
    if (wager < 200) {
        cout << "Aw cmon, take a chance!" << endl;
    } else if (balance == wager && wager > 2000) {
        cout << "Go Big or Go Home!!" << endl;
    }
    
}

