/*
	Title:  bill.cpp
	Author: Rezvi Ahmed
	Date:   02/05/2015
	Purpose:
		This program will read in the quantity of a particular item and its price.
		It will then print out the total price.
		The input will come from the keyboard and the output will go to
		the screen.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int quantity; // contains the amount of items purchased float itemPrice;
    float priceOfEachItem; // contains the price of each item
	float totalBill; // contains the total bill.
    string nameOfTheItem;
	cout << setprecision(2) << fixed << showpoint; // formatted output
    cout << "Please input the name of the item" << endl;
    getline (cin, nameOfTheItem);
	cout << "\nPlease input the number of items bought" << endl;
	// Fill in the input statement to bring in the quantity.
    cin >> quantity;
	// Fill in the prompt to ask for the price.
    cout << "\nPlease input the price of each item" << endl;
	// Fill in the input statement to bring in the price of each item.
    cin >> priceOfEachItem;
    cout << "\nThe item that you bought is " << nameOfTheItem << endl;
    
	// Fill in the assignment statement to determine the total bill.
    totalBill = (quantity * priceOfEachItem);
	// Fill in the output statement to print total bill, with a label to the screen.
    cout << "The total bill is $" << totalBill << endl;

	
	return 0;
}