/******************************************************************************
 
7.19 (Converting vector Example of Section 7.10 to array) Convert the vector example of
Fig. 7.26 to use arrays. Eliminate any vector-only features.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
#include <array>
using namespace std;

const size_t arraySize = 11;
void outputArray (const array <int, arraySize> &, size_t);
void inputArray (const array <int, arraySize> &, size_t);

int main()
{
    array <int, arraySize> integers1;
    array <int, arraySize> integers2;
    
    cout << "Size of array integers1 is " << integers1.size ()
        << "\nvector after initialization: " << endl;
    outputArray (integers1, arraySize);
    
    cout << "\nSize of array integers2 is " << integers2.size ()
        << "\nvector after initialization: " << endl;
    outputArray (integers2, arraySize);
    
    cout << "\nEnter 17 integers: " << endl;
    inputArray (integers1, arraySize);
    inputArray(integers2, arraySize);
    
    cout << "\nAfter input, the arrays contain:\n"
        << "integers1:" << endl;
    outputArray (integers1, arraySize);
    cout << "integers2:" << endl;
    outputArray (integers2, arraySize);
    
    cout << "integers1 and integers2 are not equal" << endl;
    
    array <int, arraySize> integers3 (integers1);
    
    cout << "\nSize of array integers3 is " << integers2.size ()
        << "\nvector after initialization: " << endl;
    outputArray (integers3, arraySize);
    
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;
    
    cout << "integers1:" << endl;
    outputArray (integers1, arraySize);
    cout << "integers2:" << endl;
    outputArray (integers2, arraySize);
    
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }
    
    cout << "\n\nAssigning 1000 to integers[5]" << endl;
    integers1 [5] = 1000;
    cout << "intergers1" << endl;
    outputArray (integers1, arraySize);
    
    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl;
    }
    catch (out_of_range &ex) {
        cerr << "An exception ocurred: " << ex.what () << endl;
    }
    
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3 [10] = (1000);
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputArray (integers3, arraySize);
}

void outputArray (const array <int, arraySize> &array, size_t x) {
    for (int i = 0; i < 11; i++) {
        cout << i << " ";
    }
    
    cout << endl;
}

void inputArray (const array <int, arraySize> &array, size_t x) {
    for (int i = 0; i < 11; i++) {
        cin >> i;
    }
}
