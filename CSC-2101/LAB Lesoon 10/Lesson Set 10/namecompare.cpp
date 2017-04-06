/*
	Title:  namecompare.cpp
	Author: Rezvi Ahmed
	Date:	04/15/2015
	Purpose:	This program will read in two names and then print the names 
				in alphabetical order.
*/

#include <iostream>
#include <cstring>

using namespace std;


int main()
{
	const int length = 25;
	
	char string1[length], string2[length];
	
	cout << "\nPlease input the first name\n";
	cin.getline(string1, length);
	
	cout << "\nPlease input the second name\n";
	cin.getline(string2, length);
	
	if (strcmp(string1, string2) < 0)
	{
		cout << "\nThe names are as follows:\n";
		cout << string1 << endl;
		cout << string2 << endl << endl;
	}
	else if (strcmp(string1, string2) > 0)
	{
		cout << "\nThe names are as follows:\n";
		cout << string2 << endl;
		cout << string1 << endl << endl;
	}
	else 
	{
		cout << "\nThe names are as follows:\n";
		cout << string1 <<endl;
		cout << string2 << endl;
		cout << "The names are the same\n" << endl;
	}
	return 0;
}