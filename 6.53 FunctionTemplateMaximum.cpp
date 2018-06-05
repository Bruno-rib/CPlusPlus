// pearson c++ how to program 9th edition -- Homework 6.53 (Function Template Maximum)
#include <stdio.h>
#include <iostream>
using namespace std;

template <class T>
T GetMax (T a, T b) {
  T result;
  result = (a > b) ? a : b;
  return (result);
}

int main () {
  int i=67, j=6, k;
  float l=10.5, m=55.2, n;
  char x='a', y='k', z;
  k=GetMax<int>(i,j);
  n=GetMax<float>(l,m);
  z=GetMax<char>(x,y);
  cout << k << endl;
  cout << n << endl;
  cout << z << endl;
  return 0;
}
