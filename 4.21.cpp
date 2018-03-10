#include <stdio.h>
#include <iostream>
using namespace std;

int main ()
{
    unsigned int count = 1;
    
    while (count <= 10) 
    {
        
        // if condition is true will print first statement "****"
        // otherwise will print second statement "+++++++"
        cout << (count % 2 ? "****" : "++++++++") << endl;  
        ++count;
    }
}
