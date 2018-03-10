#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Biggest
{
public:
  Biggest (int counter, float number)
  {
    cout << "enter sales from 10 top salesperson: \n";

    while (counter < 10)
      {
	cout << "\t $ ";
	cin >> number;

	if (number > getLargest ())
	  {
	    setLargest (number);
	  }
	counter++;
      }

    cout << "Largest sales was: \t$" << getLargest () << endl;

  }

  void setLargest (float z)
  {
    largest = z;
  }

  float getLargest ()
  {
    return largest;
  }

private:
  float largest;

};


int
main ()
{
  Biggest bo (0, 0);
}
