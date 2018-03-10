#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Salary
{
public:
  Salary (float h, float r)
  {
    while (h > 0)
      {
	cout << "Enter hours worked (-1 to end): \t";
	cin >> h;

	if (h > 0)
	  {
	    cout << "Enter hourly rate of the employee($00.00): \t";
	    cin >> r;
	  }

	if (h < 40)
	  {
	    setSalary (h * r);
	  }
	else
	  {
	    setSalary (40 * r + (h - 40) * 1.5 * r);
	  }
	cout << setprecision (2) << fixed;
	cout << "Salary is \t $" << getSalary () << "\n \n";

      }
  }

  void setSalary (float z)
  {
    salary = z;
  }

  float getSalary ()
  {
    return salary;
  }

private:
  float salary;
};

int
main ()
{
  Salary bo (1, 0);
}
