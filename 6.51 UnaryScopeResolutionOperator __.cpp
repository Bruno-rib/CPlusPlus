// pearson c++ how to program 9th edition -- Homework 6.52 (Function Template Minimum)
#include <stdio.h>
#include <iostream>
using namespace std;

template <class T>
T GetMin (T a, T b) {
  T result;
  result = (a < b) ? a : b;
  return (result);
}

int main () {
  int i=67, j=6, k;
  float l=10.5, m=55.2, n;
  char x='a', y='l', z;
  k=GetMin<int>(i,j);
  n=GetMin<float>(l,m);
  z=GetMin<char>(x,y);
  cout << k << endl;
  cout << n << endl;
  cout << z << endl;
  return 0;
}

