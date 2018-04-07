// pearson c++ how to program 9th edition -- homework 5.31 (Tax Plan Alternatives; The
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float e = 0;
    float s = 0;
    cout << "Please enter your expenses per year on: \n";
    
    for (int i = 1; i < 8; i++) {
        switch (i) {
            case 1:
                cout << "Housing: \t$";
                cin >> e;
                s += e;
                break;
            
            case 2:
                cout << "Food:\t\t$";
                cin >> e;
                s += e;
                break;
                
            case 3:
                cout << "Clothing: \t$";
                cin >> e;
                s += e;
                break;
                
            case 4:
                cout << "Transportation:\t$";
                cin >> e;
                s += e;
                break;
            
            case 5:
                cout << "Education: \t$";
                cin >> e;
                s += e;
                break;
                
            case 6:
                cout << "Health: \t$";
                cin >> e;
                s += e;
                break;
                
            case 7:
                cout << "Vacations: \t$";
                cin >> e;
                s += e;
                break;
        }
    }
    
    cout << setprecision (2) << fixed;
    cout << "With a FairTax initiative your estimated year pay is: \t" << 0.3 * s << endl;
}
