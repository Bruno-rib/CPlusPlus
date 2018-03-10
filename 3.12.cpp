#include <stdio.h>
#include <iostream>		// let us use cout and others
using namespace std;		// automatic std input

class Account			//declaration of class
{
public:
  Account (int z)
  {				// constructor

    cout << "please enter balance \n";
    cin >> z;

    if (z < 0)
      {
	z = 0;
	cout << "invalid amount" << endl;	// check if input is valid
      }
    setBalance (z);
    cout << "balance is " << getBalance () << endl;	//print balance



  }

  void credit (int c)
  {
    cout << "please enter credit \n";
    cin >> c;

    if (c < 0)
      {
	c = 0;
	cout << "invalid amount" << endl;	// check if input is valid
      }
    c = getBalance () + c;
    setBalance (c);
    cout << "balance after credit is " << getBalance () << endl;
  }

  void debit (int d)
  {
    cout << "please enter debit \n";
    cin >> d;

    if (d < 0)
      {
	d = 0;
	cout << "invalid amount" << endl;	// check if input is valid
      }
    if (d > getBalance ())
      {
	d = 0;
	cout << "debit amount exceeded account balance" << endl;	// check if input is valid
      }

    d = getBalance () - d;
    setBalance (d);
    cout << "balance after debit is " << getBalance () << endl;
  }

  void setBalance (int x)
  {
    balance = x;		// accessing balance
  }

  int getBalance ()
  {
    return balance;		// return balance
  }

private:
  int balance;			// setting balance private for class Account
};

int
main ()
{
  cout << "enter details for the first account" << endl;
  Account bo1 (0);		//creating object and running constructor
  bo1.credit (0);
  bo1.debit (0);
  cout << "current balance of the first account  " << bo1.
    getBalance () << endl;

  cout << "enter details for the second account" << endl;
  Account bo2 (0);		//creating object and running constructor
  bo2.credit (0);
  bo2.debit (0);
  cout << "current balance of the second account  " << bo2.
    getBalance () << endl;
}
