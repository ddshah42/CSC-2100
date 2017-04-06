/*
	Title:
	Author: Dhairya Shah
	Date: February 12, 2016
	Purpose: INCREMENTAL PROGRAMMING!
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double RENT;
    double WATERANDELECTRICITY;
    double INTERNET;
    double INCOME;
    double CARPAYMENT;
    double GAS;
    double INSURANCE;
    double DININGOUT;
    double GROCERIES;
    double EXTRA;
    double PHONE;
    
    int totalSpend;
    int moneyLeft;
    char name[50];
    float currentbalance = 0.0;
    
    
    cout << "What is your first name ? ";
    cin >> name;
    cout << "\n";
    
    cout << name << ", what is your current monthly income?" << endl;
    cout << "INCOME:$ ";
    cin >> INCOME;
    cout << "\n";
    
    cout << "Great! Now I am going to ask you about your bills. " << endl;
    cout << "\n";
    
    cout << "How much do you usually spend on the following: " << endl;
    cout << "\n";
    
    cout << "RENT:$ ";
    cin >> RENT;
    
    cout << "WATER AND ELECTRICTY:$ ";
    cin >> WATERANDELECTRICITY;
    
    cout << "INTERNET:$ ";
    cin >> INTERNET;
    
    cout << "PHONE:$ ";
    cin >> PHONE;
    
    cout << "CAR PAYMENT:$ ";
    cin >> CARPAYMENT;
    
    cout << "GAS:$ ";
    cin >> GAS;
    
    cout << "INSURANCE:$ ";
    cin >> INSURANCE;
    
    cout << "GROCERIES:$ ";
    cin >> GROCERIES;
    
    cout << "DINING OUT:$ ";
    cin >> DININGOUT;
    
    cout << "USELESS STUFF YOU DON'T NEED:$ ";
    cin >> EXTRA;
    cout << "\n";
    
    totalSpend = (RENT + WATERANDELECTRICITY + INTERNET + PHONE + CARPAYMENT + GAS + INSURANCE + GROCERIES + DININGOUT + EXTRA);
    
    moneyLeft = (INCOME - totalSpend);
    
    if (moneyLeft > 0)
    {
        cout << "Good job!  You still have $" << moneyLeft << " in your account after paying all your bills and even spending your money on useless stuff. " << endl;

    }
    
    else
    {
        if ( moneyLeft == 0)
        {
            cout << "Good Job! You spend all the money that you earn. You have $" << moneyLeft << " left, so make sure you spend less money or start saving money. " << endl;
        }
        else
        {
            cout << "Whoa!  You have a negative balance of ($" << moneyLeft * -1 << ")!" << endl;
            cout << "I suggest you either get a better-paying job or try to reduce your bills!!" << endl;
            cout << "\n";
            
        }
        
    }
    return 0;
    
}