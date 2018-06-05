/******************************************************************************

7.17 (What Does This Code Do?) What does the following program do?

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

const size_t arraySize = 10;
int whatIsThis (const array <int, arraySize> &, size_t);

int main()
{
    array <int, arraySize> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int result = whatIsThis (a, arraySize);
    cout << "Result is " << result << endl;
    
    array <int, arraySize> b = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    cout << "\nResult is: " << whatIsThis (b, 5);
    
}

int whatIsThis (const array <int, arraySize> &b, size_t size) {
    if (size == 1) 
        return b[0];
    else
        return b[size - 1] + whatIsThis (b, size - 1);
}


