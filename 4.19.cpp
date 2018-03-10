#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    cout << "enter sales from 10 top salesperson: \n";
    float first;
    float second;
    float number;
    int counter;
    
    while (counter < 10)
    {
	    cout << "\t $ ";
	    cin >> number;

	    if (number > first)
	    {
	        second = first;
	        first = number;
	    } 
	    else if (number > second && number != first) {
	        second = number;
	    }
	        counter++;
    }
    
    cout << setprecision (2) << fixed;
    cout << "Largest sales was: \t$" << first << endl;
    cout << "Second largest sales was: \t$" << second << endl;
}


