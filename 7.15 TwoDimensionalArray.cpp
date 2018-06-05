/******************************************************************************

7.15 (Two-Dimensional array Initialization) Label the elements of a 3-by-5 two-dimensional
array sales to indicate the order in which they’re set to zero by the following program segment:
for ( size_t row = 0; row < sales.size(); ++row )
for ( size_t column = 0; column < sales[ row ].size(); ++column )
sales[ row ][ column ] = 0;

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array <array <int, 3>, 5> sales;
    
    for ( size_t row = 0; row < sales.size(); ++row )
        for ( size_t column = 0; column < sales[ row ].size(); ++column )
            sales[ row ][ column ] = 0;
}
