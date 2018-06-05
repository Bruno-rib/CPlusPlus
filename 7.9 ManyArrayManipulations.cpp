// pearson c++ how to program 9th edition -- Homework 7.9 (Two-Dimensional array Questions)
#include <stdio.h>
#include <iostream>
#include <iomanip> 
#include <array>
#include <algorithm>
using namespace std;

// t has 2 rows
// t has 3 columns
// t has 6 elements (2 * 3)

const size_t rows = 2;
const size_t columns = 3;
array <array <int, columns>, rows> t = {1, 2, 3, 4, 5, 6};
void printArray ();
void changeCounter ();
int changeRange ();
void input ();
void findMin ();
void rowO ();
void column2 ();

template <class T>
T getMin (T a, T b) {
    T x;
    x = (a < b) ? a : b; 
    return (x);
}

int main()
{
    printArray ();
    t [0][1] = 0;
    printArray ();
    t [0][0] = 0;t [0][1] = 0;t [0][2] = 0;
    t [1][0] = 0;t [1][1] = 0;t [1][2] = 0;
    printArray ();
    changeCounter ();
    printArray ();
    changeRange ();
    printArray ();
    input ();
    printArray();
    findMin ();
    rowO ();
    column2 ();
}

void printArray () {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << t [i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

void changeCounter () {
    for (size_t row = 0; row < t.size (); row++) {
        for (size_t column = 0; column < t [row].size(); column ++) {
            t [row][column] = 1;
        }
    }
}

int changeRange () {
    for (auto& row : t)
        for (auto& column : row)
            column = 0;
}

void input () {
    cout << "Please enter 6 numbers for array: " << endl;
            
    for (auto& row : t)
        for (auto& column : row) {
            cin >> column;
        }
}

void findMin () {
    int min = t[0][0];
    
    for (auto& row : t) {
        for (auto& column : row) {
            min = getMin (column, min);
        }
    }
    
    cout << "the smallest value is: " << min << "\n\n";
}

void rowO () {
    for (auto row : t) {
        for (auto i : row) {
            cout << i << " ";
        }
        break;
    }
    cout << "\n\n";
}

void column2 () {
    int sum = 0;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += (j == 1) ? t[i][j] : 0;        
        }
    }
    cout << "The sum of second column is: " << sum << endl;
}


