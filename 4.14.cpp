
#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

class Customer
{
public:
  Customer (int accNumber, float bal, float debit, float credit, float limit)
  {
    for (int i = 0; accNumber > 0; i++)
      {

	cout << "Enter account number (-1 to quit): \t";
	cin >> accNumber;

	if (accNumber > 0)
	  {
	    cout << "Enter initial balance: \t";
	    cin >> bal;

	    cout << "Enter total charges: \t";
	    cin >> debit;

	    cout << "Enter total credits: \t";
	    cin >> credit;

	    cout << "Enter credit limit: \t";
	    cin >> limit;

	    setFinal (bal + debit - credit);

	    if (getFinal () < limit)
	      {
		cout << setprecision (2) << fixed;
		cout << "New balance is: \t" << getFinal () << "\n \n";
	      }
	    else
	      {
		cout << setprecision (2) << fixed;
		cout << "New balance is: \t" << getFinal () << endl;
		cout << "Account: \t" << accNumber << endl;
		cout << "Credit Limit: \t" << limit << endl;
		cout << "Balance: \t" << getFinal () << endl;
		cout << "Credit Limit Exceed. \n \n";
	      }
	  }
      }
  }

  void setFinal (float x)
  {
    final = x;
  }

  float getFinal ()
  {
    return final;
  }

private:
  float final;

};

int
main ()
{
  Customer bo (1, 0, 0, 0, 0);

}
