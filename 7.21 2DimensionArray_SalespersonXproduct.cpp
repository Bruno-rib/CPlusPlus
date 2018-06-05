/******************************************************************************

7.21 (Sales Summary) Use a two-dimensional array to solve the following problem. A company
has four salespeople (1 to 4) who sell five different products (1 to 5). Once a day, each salesperson
passes in a slip for each different type of product sold. Each slip contains the following:
a) The salesperson number
b) The product number
c) The total dollar value of that product sold that day
Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the information
from all of the slips for last month is available. Write a program that will read all this information
for last months sales (one salesperson data at a time) and summarize the total sales by salesperson
by product. All totals should be stored in the two-dimensional array sales. After processing all the
information for last month, print the results in tabular format with each of the columns representing
a particular salesperson and each of the rows representing a particular product. Cross total each
row to get the total sales of each product for last month; cross total each column to get the total
sales by salesperson for last month. Your tabular printout should include these cross totals to the
right of the totaled rows and to the bottom of the totaled columns.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

const size_t rows = 7;
const size_t columns = 6;
void input (const array <array <int, columns>, rows> &);
void printArray (const array <array <int, columns>, rows> &);
array <array <int, columns>, rows> array1;

int main()
{
    input (array1);
    printArray (array1);
}

void input (const array <array <int, columns>, rows> & a) {
    for (int i {1}; i < rows - 1; i++) {
        for (int j {1}; j < columns - 1; j++) {
            cout << "Enter total month sales of product " << i << 
                " for salesperson " << j << ":\n";
            cin >> array1 [i][j];
            array1 [i][columns - 1] += array1 [i][j];
            array1 [rows - 1][j] += array1 [i][j];
        }
    }
}

void printArray (const array <array <int, columns>, rows> & a) {
    for (int i{0}; i < rows; i++) {
        for (int j{0}; j < columns; j++) {
            if (j == 0) {
                cout << i << ' ';
            } else if (i == 0) {
                cout << j << ' ';
            } else {
                cout << array1 [i][j] << ' ';
            }
        }
            
        cout << endl;
    }
}


