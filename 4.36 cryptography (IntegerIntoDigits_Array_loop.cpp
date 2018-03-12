// pearson c++ how to program 9th edition       --     homework 4.36 (Enforcing Privacy with Cryptography) The explosive
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;          //4 digit integer to be encrypted
    int p = 1;          //represents power
    int t = 0;          // temporary variable used for swapping values
    int enc [5] = {0, 0, 0, 0, 0};      //array to record separated digits

    
    cout << "Please enter number to be encrypted: \t";
    cin >> n;
    
    for (int i = 4; i > 0; i--) {               //separate number into digits
        p = p * 10;
        enc[i] = n % p;
        enc [i] = (enc [i] - enc [i + 1]) / (p / 10);
    }
    
    cout << "Before: \t" << setw(4) << setfill('0') << enc[1] * 1000 + enc[2] * 100 + enc[3] * 10 + enc[4] * 1 << endl;
    
    for (int i = 1; i < 5; i++) {       //adding 7 and getting remainder from 10
        enc [i] = (enc [i] + 7) % 10;
    }
    
    cout << "after ramainder: \t" << setw(4) << setfill('0') << enc[1] * 1000 + enc[2] * 100 + enc[3] * 10 + enc[4] * 1 << endl;
    
    t = enc [1];                        //swapping values 1-3 and 2-4
    enc [1] = enc [3];
    enc [3] = t;
    
    t = enc [2];                        //swapping values 1-3 and 2-4
    enc [2] = enc [4];
    enc [4] = t;
    
    n = enc[1] * 1000 + enc[2] * 100 + enc[3] * 10 + enc[4] * 1;
    cout << "Encrypted value is: \t" << setw(4) << setfill('0') << n << endl;
    
    p = 1;                                      // resetting
    for (int i = 4; i > 0; i--) {               //separate number into digits
        p = p * 10;
        enc[i] = n % p;
        enc [i] = (enc [i] - enc [i + 1]) / (p / 10);
    }
    
    cout << "Before: \t" << setw(4) << setfill('0') << enc[1] * 1000 + enc[2] * 100 + enc[3] * 10 + enc[4] * 1 << endl;
    
    t = enc [1];                        //swapping values 1-3 and 2-4
    enc [1] = enc [3];
    enc [3] = t;
    
    t = enc [2];                        //swapping values 1-3 and 2-4
    enc [2] = enc [4];
    enc [4] = t;
    
    cout << "After swapping: \t" << setw(4) << setfill('0') << enc[1] * 1000 + enc[2] * 100 + enc[3] * 10 + enc[4] * 1 << endl;
    
    for (int i = 1; i < 5; i++) {       //adding 10 subtracting 7 (add 3) and %10
        enc [i] = (enc [i] + 3) % 10;
    }
    
    n = enc[1] * 1000 + enc[2] * 100 + enc[3] * 10 + enc[4] * 1;
    cout << "Decrypted value is: \t" << n;
}


