
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Gross
{
public:
  Gross (float sales)
  {

    while (sales > 0)
      {
	cout << "Enter sales in dollars (-1 to end): \t";
	cin >> sales;

	if (sales > 0)
	  {
	    setEarning (200 + sales * 9 / 100);
	    cout << setprecision (2) << fixed;
	    cout << "Salary is: \t$" << getEarning () << "\n \n";
	  }

      }
  }

  void setEarning (int z)
  {
    earning = z;
  }

  float getEarning ()
  {
    return earning;
  }

private:
  float earning;

};


int
main ()
{
  Gross bo (1);
}
