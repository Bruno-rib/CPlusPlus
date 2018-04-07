// pearson c++ how to program 9th edition -- homework 5.30 (Global Warming Facts Quiz) The controversial
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{   
    int p = 1;
    int x = 0;
    int s = 0;
    
    cout << "Choose the right answer (5 pts each): \n";
    
    for (;p < 6; p++) {
        switch (p) {
                case 1 :
                    cout << "\nMain gas responsible for global warming? \n";
                    cout << "\t1) Helium \n\t2) Nitrogen \n\t3) Carbon Dioxide \n\t4) Water Vapor \n\n";
                    cout << "Choose your answer (1-4): \t";
                    cin >> x;
                    if (x == 3)
                        s += 5;
                    break;
                    
                case 2 :
                    cout << "\nWhat is global warming? \n";
                    cout << "\t1) The increase on average global temperature  \n\t2) Chocolate \n\t3) Fruit \n\t4) Soap brand \n\n";
                    cout << "Choose your answer (1-4): \t";
                    cin >> x;
                    if (x == 1)
                        s += 5;
                    break;
                    
                case 3 :
                    cout << "\nWhat are the other effects of global warming? \n";
                    cout << "\t1) Chocolate  \n\t2) Melting glaciers \n\t3) Fruit \n\t4) Soap brand \n\n";
                    cout << "Choose your answer (1-4): \t";
                    cin >> x;
                    if (x ==2)
                        s += 5;
                    break;
                    
                case 4 :
                    cout << "\nWhat skeptics believe? \n";
                    cout << "\t1) Melting glaciers  \n\t2) Chocolate \n\t3) Lack of evidence \n\t4) Soap brand \n\n";
                    cout << "Choose your answer (1-4): \t";
                    cin >> x;
                    if (x == 3)
                        s += 5;
                    break;
                    
                case 5 :
                    cout << "\nWhat also skeptics believe? \n";
                    cout << "\t1) Melting glaciers  \n\t2) Chocolate \n\t3) Santa \n\t4) Controversy among data \n\n";
                    cout << "Choose your answer (1-4): \t";
                    cin >> x;
                    if (x == 4)
                        s += 5;
                    break;
                    
                default :
                    
                    break;
        }
    }
                
    cout << "\nYour score is: \t" << s << endl;
    
    switch (s) {
        case 25:
            cout << "Excellent" << endl;
            break;
        
        case 20:
            cout << "Very Good" << endl;
            break;
            
        default:
            cout << "Time to brush up on your knowledge of global warming" << endl;
            break;
    }
}

