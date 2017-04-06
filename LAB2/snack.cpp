/*
	Title:  snack.cpp
	Author:  (Dhairya Shah)
	Date:  (february 2, 2016)
	Purpose:  Practice with output
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	char rating;
	string snack;
	string horizontalLine(30, '-'); //creates a string called horizontalLine 
	//                                that contains 30 dashes
	
	// Fill in the code to do the following:
	// Assign the value of "pickles" to snack
	// Assign a grade of 'A' to rating
	
	// Print out the snack & rating
	cout << "\n\nSnack: " << snack ;
	cout << "pickles "<< endl;

	cout << "Rating: " << rating;
	cout << "A"<< endl;
	
	cout << horizontalLine << endl << endl;
	
	// Fill in the code to do the following:
	// Assign the value of "oranges" to snack
	// Assign a grade of 'C' to rating
	
	//Print out the new snack & rating
	cout << "\n\nSnack: " << snack ;
	cout << "oranges "<< endl;

	cout << "rating: " << rating;
	cout << "C"<< endl;
	cout << horizontalLine << endl << endl;
	
	return 0;
}