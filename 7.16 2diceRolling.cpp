/******************************************************************************

7.16 (Dice Rolling) Write a program that simulates the rolling of two dice. The sum of the two
values should then be calculated. [Note: Each die can show an integer value from 1 to 6, so the sum
of the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 being the
least frequent sums.] Figure 7.26 shows the 36 possible combinations of the two dice. Your program
should roll the two dice 36,000 times. Use a one-dimensional array to tally the numbers of times
each possible sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable
(i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7).

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

array <array <int, 6>, 6> d;
array <array <int, 6>, 6> f;
array <int, 11> s;
void assign ();
void print ();
void r ();
void printF ();
void printS ();

int main()
{
    assign ();
    print ();
    cout << "\n\n";
    r ();
    printF ();
    cout << "\n\n";
    printS ();
}

void assign () {
    for (size_t i; i < d.size(); i++) {
        for (size_t j = 0; j < d[i].size(); j++) {
            d[i][j] = i + j + 2;
        }
    }
}

void print () {
    for (size_t i = 0; i < d.size (); i++) {
        for (size_t j = 0; j < d[i].size (); j++) {
            cout << setw (3) << d[i][j];
        }
        cout << endl;
    }
}

void r () {
    for (int i = 0; i < 36001; i++) {
        int l = rand () % 6;
        int j = rand () % 6;
        f[l][j] ++;
        s[l + j]++;
    }
}

void printF () {
    for (size_t i = 0; i < f.size (); i++) {
        for (size_t j = 0; j < f[i].size (); j++) {
            cout << setw (5) << f[i][j];
        }
        cout << endl;
    }
}

void printS () {
    for (size_t i = 0; i < s.size(); i++) 
        cout << i + 2 << " - " << s[i] << endl;
}
