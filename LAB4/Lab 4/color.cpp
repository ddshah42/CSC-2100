/*
	Title: color.cpp
	Author:  Dhairya Shah
	Date:  (02/12/2016)
	Purpose:  secondary color generator.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string colorInput;
	
	cout << "\nEnter the name of two primary colors (red, blue, or yellow)." << endl;
	cout << "Separate each with a space\n";
	getline(cin, colorInput);
	
	if (colorInput == "red blue")
		cout << "\nred and blue make purple!\n";
	else if (colorInput == "blue red")
		cout << "\nblue and red make purple!\n";
	else if (colorInput == "red yellow")
		cout << "\nred and yellow make orange!\n";
	else if (colorInput == "yellow red")
		cout << "\nyellow and red make orange!\n";
	else if (colorInput == "blue yellow")
		cout << "\nblue and yellow make green!\n";
	else if (colorInput == "yellow blue")
		cout << "\nyellow and blue make green!\n";
	else
		cout << "\nError! One of the colors you entered is not a primary color\n" <<endl;
		cout <<"\n";
	return 0;
}