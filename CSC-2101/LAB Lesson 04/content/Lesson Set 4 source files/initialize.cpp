/*
	Title:  initialize.cpp
	Author:
	Date:
	Purpose:  This program tests whether or not an initialized value 
				is equal to a value input by the user
*/
#include <iostream>
using namespace std;

int main( )
{
	int num1, num2=5;

	cout << "Please enter an integer" << endl;
	cin >> num1;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 = num2)
		cout << "Hey, that's a coincidence!" << endl;
	if (num1 != num2)
		cout << "The values are not the same" << endl;

	return 0;
}
