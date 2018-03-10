// pearson c++ how to program 9th edition       --     homework 4.27 

#include <iostream>
#include <math.h>           // use pow function
using namespace std;

int main()
{
    int size;               // size of array
    int number;             // number in binary entered by user      
    int power;              // calculating power separately
    float sum = 0;          // result in decimal
    float j = 1;            // counter for while function
    int power2;                 // variable for while function
    int newArray[size];     // array
    newArray [0] = 0;       // declaring first number on array so I can use i-1 on line 26
    
    cout << "How many digits? \n";
    cin >> size;
    
    cout << "Enter binary number \t";
    cin >> number;

    for (int i = 1; i < size + 1; i++) {
        power = pow (10, i);
        newArray[i] = number % power;
        newArray [i] = (newArray [i] - newArray [i-1]) / (power / 10);
        power2 = newArray [i];                      // using
        
        while (j < i) {                               // pow (2, i) was resulting in segment fault
            power2 = power2 * 2;            // so I created a while loop that does what
            j++;                                        // pow function does
        }
        
        sum = power2 + sum;
        j = 1;                                         //reset j for next loop
    }
    cout << "Decimal equivalent is " << sum << endl;
}

