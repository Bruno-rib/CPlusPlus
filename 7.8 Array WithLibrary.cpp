// pearson c++ how to program 9th edition -- Homework 7.8 (Write C++ Statements)
#include <stdio.h>
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

array <int, 10> alphabet;
array <float, 10> grades;
array <int, 5> values;
array <float, 100> temperatures;
float setArray ();
float setArrayTemp ();
float displayA (float);
float printArray ();

template <class T>
    T GetMin (T a, T b) {
         T result;
         result = (a < b) ? a : b;
         return (result);
    }
    
template <class T>
    T GetMax (T a, T b) {
        T result;
        result = (a > b) ? a : b;
        return (result);
    }


int main()
{
    setArray ();
    displayA (6);
    cout << "\n\nAll temperatues are: " << endl;
    setArrayTemp ();
    printArray ();
}

float setArray () {
    for (size_t j = 0; j < alphabet.size (); ++j) {
        alphabet [j] = j;
        grades [j] = j + 0.8;
        values [j] = 8;
    }
}

float setArrayTemp () {
    float min = 10000;
    float max = 0;
    float total = 0;
    for (size_t i = 0; i < temperatures.size (); i++) {
        temperatures [i] = i + 32.3;
        total += temperatures [i];
        cout << temperatures [i] << "\t";
        if (i % 8 == 0) {
            cout << endl;
        }
        min = GetMin <float> (min, temperatures [i]);
        max = GetMax <float> (max, temperatures [i]);
    }
    cout << "\n\nTotal of temperatures: " << total << endl;
    cout << "Minimum of temperatures: " << min << endl;
    cout << "Maximum of temperatures: " << max << endl;
    
}

float displayA (float x) {
    for (int item : alphabet) {
        if (item == x) {
            cout << "Item 6 of array Alphabet is: " << alphabet [x] << endl;
            cout << "Item 4 of array Values is: " << values [x - 2] << endl;
            cout << "Item 4 of array is: " << grades [x - 2] << endl;
        }
    }
}

float printArray () {
    cout << "before: " << endl;
    for (int item : alphabet) {
        cout << alphabet [item] << " - ";
    }
    
    copy(begin(values), end(values), begin(alphabet));
    
    cout << "\nafter: " << endl;
    for (int item : alphabet) {
        cout << alphabet [item] << " - ";
    }
}

