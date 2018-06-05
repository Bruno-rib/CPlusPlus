// pearson c++ how to program 9th edition -- Example chapter 7 array
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>            //allow use of size_t and n.size
#include <algorithm>        //contains sort & binary_search
using namespace std;

array <int, 10> n;
int setArray ();
int modifyArray ();
int sortSearch ();

int multiDimensional ();
    const size_t rows = 2;
    const size_t columns = 3;
void printArray (const array <array <int, columns>, rows> &);


int main () {

    setArray ();
    
    modifyArray ();

    sortSearch ();
    
    multiDimensional ();
}

int setArray() {
    int total = 0;
    
    for (size_t i = 0; i < n.size(); ++i) {        // set values array
        n[i] = 200 - 3 * i;
    }

    cout << "Element" << setw (13) << "Value" << endl;              //print values
    for (size_t j = 0; j < n.size (); ++j) {
        cout << setw (7) << j + 1 << setw (13) << n [j] << endl;
    }
    
    for (size_t i = 0; i < n.size (); i++) {            // some all entries on array
        total += n [i];
    }
    
    cout << "\nTotal of array elements: " << total << endl;  //print out total
}

int modifyArray () {
    
    cout << "\nitems before modification: ";        //printing using colon
    for (int item : n) 
        cout << item << ' ';
        
    for (int &itemRef : n)      //pointer modification that saves
        itemRef *= 2;
        
    cout << "\nitems after modification: ";         
    for (int item : n)
        cout << item << " ";
    cout << endl;
}

int sortSearch () {
    
    sort (n.begin(), n.end());      //sort
    cout << "\nSorted array: \n";
    for (int item : n)
        cout << item << " ";
    
    bool found = binary_search (n.begin(), n.end(), 382);
        cout << "\n\n\"382\" " << (found ? "was " : "was not ")
        << "found in array" << endl;
}

int multiDimensional () {
    
    array <array <int, columns>, rows> array1 = {1, 2, 3, 4, 5, 6};
    array <array <int, columns>, rows> array2 = {1, 2, 3, 4, 5};
    
    cout << "\nValues in array1 by row are: " << endl;
    printArray (array1);
    
    cout << "\nValues in array2 by row are: " << endl;
    printArray (array2);
}

void printArray (const array <array <int, columns>, rows> & a) {
    for (auto const &row : a) {
        for (auto const &element : row)
            cout << element << ' ';
            
        cout << endl;
    }
}















