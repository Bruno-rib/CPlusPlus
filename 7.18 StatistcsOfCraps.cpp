/******************************************************************************

7.18 (Craps Game Modification) Modify the program of Fig. 6.11 to play 1000 games of craps.
The program should keep track of the statistics and answer the following questions:
a) How many games are won on the 1st roll, 2nd roll, …, 20th roll, and after the 20th roll?
b) How many games are lost on the 1st roll, 2nd roll, …, 20th roll, and after the 20th roll?
**c) What are the chances of winning at craps? [Note: You should discover that craps is one
of the fairest casino games. What do you suppose this means?] %%Highest percentage on casino
**d) What’s the average length of a game of craps?
e) Do the chances of winning improve with the length of the game? %%decrease

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime>
using namespace std;

const size_t arraySize = 21;
int sumArray (const array <int, arraySize> &, size_t);
unsigned int rollDice ();
void craps ();
float loop = 10000;
int setPrint = 5;
array <int, arraySize> win;
array <int, arraySize> loss;

int main()
{
        craps ();
}

void craps () {
    
    float l = 0;
    float w = 0;
    
    for (int i =0; i < loop; i++){
        enum Status { CONTINUE, WON, LOST };
        
        float c = 1;
        
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
                //cout << "Point is " << myPoint << endl;
                break; // optional at end of switch
        } // end switch
        // while game is not complete
        while ( CONTINUE == gameStatus ) // not WON or LOST
        {
                sumOfDice = rollDice(); // roll dice again
                c++;
            // determine game status
            if ( sumOfDice == myPoint ) // win by making point
                gameStatus = WON;
            else if ( sumOfDice == 7 ) // lose by rolling 7 before point
            gameStatus = LOST;
        } // end while
        // display won or lost message
        if ( WON == gameStatus ) {
            //cout << "Player wins" << "\n\n";
            if (c > arraySize) {
                win [arraySize]++;
            } else {
                win [c - 1]++;
            }
            w++;
            } else {
            //cout << "Player loses" << "\n\n";
            if (c > arraySize) {
                loss [arraySize]++;
            } else {
                loss [c - 1]++;
            }
            } 
            
        l += c;
    }
    for (int i = 1; i < 22; i++) {
        cout << setw (setPrint) << i;
    }
    cout << "\n\n";
    for (auto i : win)
        cout << setw (setPrint)<< i;
        cout << "\nSum: " << sumArray (win, arraySize) << endl;
    cout << endl;
    for (auto i : loss) 
        cout << setw (setPrint)<< i;
    cout << "\nSum: " << sumArray (loss, arraySize) << endl;
    cout << endl;
    cout << "Chances of winning at craps: " << w / loop << endl;
    cout << "The average length of a game of craps is: " << l / loop << endl;
}

    

// roll dice, calculate sum and display results
unsigned int rollDice()
{
    // pick random die values
    unsigned int die1 = 1 + rand() % 6; // first die roll
    unsigned int die2 = 1 + rand() % 6; // second die roll
    unsigned int sum = die1 + die2; // compute sum of die values
    // display results of this roll
    //cout << "Player rolled " << die1 << " + " << die2
        //<< " = " << sum << endl;
    return sum; // end function rollDice
} // end function rollDice

int sumArray (const array <int, arraySize> &b, size_t size){
    if (size == 1)
        return b[0];
    else 
        return b[size - 1] + sumArray (b, size - 1);
}





