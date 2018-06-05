/******************************************************************************
7.12 (Find the Errors) Find the error(s) in each of the following statements:
a) Assume that a is an array of three ints.
cout << a[ 1 ] << " " << a[ 2 ] << " " << a[ 3 ] << endl;
Exercises 327
b) array< double, 3 > f = { 1.1, 10.01, 100.001, 1000.0001 };
c) Assume that d is an array of doubles with two rows and 10 columns.
d[ 1, 9 ] = 2.345;
*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

array< double, 4 > f = { 1.1, 10.01, 100.001, 1000.0001 };
array <int, 3> a = {1, 2, 3};
double d [2][10];

int main()
{
    cout << a[ 0 ] << " " << a[ 1 ] << " " << a[ 2 ] << endl;
    d [1][9] = 2.345;
    return 0;
}
