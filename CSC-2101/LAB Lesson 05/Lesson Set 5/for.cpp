/*
	Title:  for.cpp
	Author: Rezvi Ahmed
	Date:   02/26/2015
	Purpose:
			This program has the user input a number n and then finds the
			mean of the first n positive integers
*/
#include <iostream>
using namespace std;

int main()
{
	int value; 		//value is some positive number n
	int total = 0; 	//total holds the sum of the first n positive numbers
	int number; 	//the amount of numbers
	float mean; 	//the average of the first n positive numbers
	
	cout << "Please enter a positive integer" << endl;
	cin >> value;
	
	if (value > 0)
	{
		for (number=1; number <= value; number++)
		{
			total = total + number;			
		} 
		
		mean = static_cast<float>(total) / value;
		
		cout << "The mean average of the first " << value;
		cout << " positive integers is " << mean << "\n" << endl;
	}
	else
		cout << "Invalid input - integer must be positive" << endl;
		
	return 0;
}