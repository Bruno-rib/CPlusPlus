// pearson c++ how to program 9th edition       --     homework 5.14 (Calculating Total Sales)
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int pn = 0;
    double q;
    int i = 0;
    double sum = 0;
    
    while (pn >= 0 && pn < 6) {
        cout << "Please enter product number: \t";
        cin >> pn;
        
        if (pn > 0 && pn < 6) {
            cout << "Quantity of product: \t";
            cin >> q;
            
            switch (pn) {
                case 1:
                sum += 2.98 * q;
                break;
                case 2:
                sum += 4.5 * q;
                break;
                case 3:
                sum += 9.98 * q;
                break;
                case 4:
                sum += 4.49 * q;
                break;
                case 5:
                sum += 6.87 * q;
                break;
            }
            i+= q;
            
        }
    }
    
    cout << "\nAmount of products sold: \t" << i << endl;
    cout << "Total Price: \t$" << sum << endl;
}
