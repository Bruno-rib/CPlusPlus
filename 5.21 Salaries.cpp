// pearson c++ how to program 9th edition       --     homework 5.14 (Calculating Total Sales) A mail
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int p = 1;      // employee type
    float n = 0;      // depends on each case
    int sal = 0;         //one salary
    
    int h = 0;                     //hours 
    float s[5] = {0, 0, 0, 0, 0};       //salary sum
    
    cout << setprecision(2) << fixed;
    
    while (p > 0) {
        
        cout << "enter type of employee (-1 to quit): \t";
        cin >> p;
        
        switch (p) {
            case -1 :
                break;
                
            case 1 :
                cout << "Enter managers fixed salary: \t";
                cin >> sal;
                s[0] += sal;
                cout << "The employee salary is: \t$" << sal << "\n\n"; 
                break;
                
            case 2 :
                cout << "Enter hours worked this period: \t";
                cin >> h;
                cout << "Enter hourly wage: \t";
                cin >> n;
                    if (h < 41) {
                        sal = h * n;
                        s[1] += sal;
                    } else { 
                        sal = n * 40 + (3 * n / 2) * (h - 40);
                        s[1] += sal;
                    }
                cout << "The employee salary is: \t$" << sal << "\n\n";
                break;
                
            case 3 :
                cout << "Please enter gross weekly sales: \t";
                cin >> n;
                sal = n * 0.057 + 250;
                s[2] += sal;
                cout << "The employee salary is: \t$" << sal << "\n\n";
                break;
                
            case 4 :
                cout << "Please enter price of items produced: \t";
                cin >> n;
                cout << "Please enter how many items were produced: \t";
                cin >> h;
                sal = n * h;
                s[3] += sal;
                cout << "The employee salary is: \t$" << sal << "\n\n";
                break;
                
            default :
                cout << "**enter correct employee code please**\n";
                break;
       }
    }
    
    cout << "Total Salaries: \t$" << s[0] + s[1] + s[2] + s[3] + s[4] << endl;
}

