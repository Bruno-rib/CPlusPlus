#include <iostream>
using namespace std;

int main()
{
    int size;
    int newArray[size];
    
    cout << "How many numbers?\n";
    cin >> size;

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << endl;
        cin >> newArray[i];
    }

    cout << "You entered: " << endl;

    for(int i = 0; i <= (size - 1) ; i++ ) {
        cout << newArray[i] << "\t";
    }
    
    cout << endl;
}
