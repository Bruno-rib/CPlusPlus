#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5, x1, x2, x3, x4, x5 = 0;
    cout << "please imput a 5 digit number \n" << endl;
    cin >> n1;
    
    x1 = n1 / 10000;
    
    n2 = (n1 / 10000) * 10000;
    x2 = (n1 - n2) / 1000;
    
    n3 = x2 * 1000;
    x3 = (n1 - n2 - n3) / 100;
    
    n4 = x3 * 100;
    x4 = (n1 - n2 - n3 - n4) / 10;
    
    n5 = x4 * 10;
    x5 = (n1 - n2 - n3 - n4 - n5) / 1;
    
    if (x1 == x5 && x2 == x4)
        cout << n1 << " is a palindrome. That is awesome!! \n";
    else    
        cout << n1 << " is NOT a palindrome. Try again later...";
}
