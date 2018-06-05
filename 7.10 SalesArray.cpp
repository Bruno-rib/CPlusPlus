// pearson c++ how to program 9th edition -- Homework 7.10 (Salesperson Salary Ranges) 
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

array <int, 9> sp;
void sales ();

int main()
{
    sales ();
}

void sales () {
    int gs = 1;
    int p = 1;
    int r = 0;
    int c = 0;
    
    
    while (gs > 0) {
        cout << "Enter weekly gross sales: " << endl;
        cin >> gs;
        bool x = true;
        
        p = 200 + 9 * gs / 100;
        c = -2 + p / 100;
        
        for (size_t i = 0; i < sp.size (); i++) {
            if (i == c && gs > 0) {
                sp [i] ++;
            }
        }
        if (c > 7) {
            sp [8]++;
        }
    }
    
    cout << "\nSales:\tSalesPeople: " << endl;
    
    int i = 0;
    for (int item : sp) {
        if (i < 8) {
        cout << (i + 2) * 100 << " - " << (i + 2) * 100 + 99 << " =\t" << item << endl;
        i++;
        }
    }
    cout << (i + 2) * 100 << " and over =\t" << sp [8] << endl;
}
