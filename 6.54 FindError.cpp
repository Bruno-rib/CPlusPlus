// pearson c++ how to program 9th edition -- Homework 6.54 (Find The Error)
#include <stdio.h>
#include <iostream>
using namespace std;

// "a" has no errors
template < class A >
int sum( int num1, int num2, int num3 )
{
return num1 + num2 + num3;
}

//"b" needs to return a value therefore can not be "void"
int printResults( int x, int y )
{
cout << "The sum is " << x + y << '\n';
return x + y;
}

// "c" missing the word class for A
template < class A >
    A product( A num1, A num2, A num3 )
    {
    return num1 * num2 * num3;
    }
    
//"d"  inside the parentheses needs same declaration as beginning
double cube( double );
int cube( int );

int main()
{
    cout << sum <int> (1, 2, 3) << endl; //a
     
    cout << printResults << endl; //b
    
    cout << product <int> (2, 3, 4) << endl; //c
    
    
}
