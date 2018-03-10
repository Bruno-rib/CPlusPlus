#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main ()
{
  float i = 1;
  float j = 0;
  cout << "N \t" << "10*N \t" << "100*N \t" << "1000*N \t" << endl;

  while (i < 6)
    {
      cout << endl;
      while (j < 4)
	{
	  cout << i * pow (10, j) << "\t";
	  j++;
	}
      i++;
      j = 0;
    }
}
