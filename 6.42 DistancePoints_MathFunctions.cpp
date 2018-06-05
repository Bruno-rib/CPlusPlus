// pearson c++ how to program 9th edition -- Homework 6.42 (Distance Between Points)
#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

double x = 0;
double xx = 0;
double y = 0;
double yy = 0;
double d = 0;

void input ();
int dist ();

int main()
{
    input ();
    cout << "\n\n Total distance between points is: " << dist () << endl;
}

void input () {
    cout << "Please enter first point (x1, y1): \t";
    cin >> x >> y;
    cout << "\nPlease enter second point coordinates (x2, y2): \t";
    cin >> xx >> yy;
}

int dist () {
    return sqrt(pow(abs(xx - x), 2) + pow(abs(yy - y), 2));
}
