/*
	Title:  while.cpp
	Author: Rezvi Ahmed
	Date:   02/26/2015
	Purpose:  A program demonstrating a while loop
*/
#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';
	
	while(letter != 'x')
	{
		cout << "Please enter a letter" << endl;
        cout << "Enter an x to terminate the program" << endl;
		cin >> letter;
        cout << "The letter you entered is " << letter << endl << endl;
	}
	return 0;
}