#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    int i = 1;
    int j = 0;
    
    cout << "enter length of square side: \t";
    
    while (i == 1) {
    cin >> x;
    cout << endl;
    
    if (x >= 1 && x <= 20)
        i = 0;
    else 
        cout << "enter a valid number please: \t";
    }
    
    while (i < x) 
    {   
        cout << endl;
        
        while (j < x) 
        {   
            if (i == 0 || i == (x-1))
            {
                cout << "*";
                j++;
            } else 
            {
                if (j == 0 || j == (x-1)){
                    cout << "*";
                    j++;
                } else 
                {
                    cout << " ";
                    j++;
                }
            }
        }
        i++;
        j = 0;
    }
}
