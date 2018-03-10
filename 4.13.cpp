
#include <stdio.h>
#include <iostream>
using namespace std;

class Mileage
{
public:
  Mileage (float d, float g, float total, int i)
  {
    for (int i = 0; d > 0; i++)
      {

	cout << "Enter miles driven (-1 to quit) \t";
	cin >> d;

	if (d > 0)
	  {

	    cout << "Enter gallons used (-1 to quit) \t";
	    cin >> g;

	    cout << "MPG this trip \t" << d / g << endl;

	    total = (getMpg () * i + d / g) / (i + 1);
	    setMpg (total);

	    cout << "Total MPG \t" << getMpg () << endl;
	  }
      }

  }

  void setMpg (float x)
  {
    mpg = x;
  }

  float getMpg ()
  {
    return mpg;
  }

private:
  float mpg;
};

int
main ()
{
  Mileage bo (1, 0, 0, 0);
}
