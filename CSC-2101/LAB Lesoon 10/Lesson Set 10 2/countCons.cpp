/*
	Title:  countCons.cpp
	Author: Rezvi Ahmed
	Date:	04/15/2015
	Purpose:	This program will determine how many consonants are in an entered 
				string of 50 characters or less
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	const int size = 50;
	char line[size];
	int length;
	int consonant = 0;
	
	cout << "\nPlease input a string of no more than 50 characters\n" << endl;
	cin.getline(line, size);
	
	cout << "\nThe input string is:\n";
	cout << line << endl << endl;
	
	length = strlen(line);
	
	for (int i=0; i<length; i++)
	{
		
		if((tolower(line[i]) != 'a' && tolower(line[i]) != 'e' && 
			tolower(line[i]) != 'i' && tolower(line[i]) != 'o' && 
			tolower(line[i]) != 'u') && isalpha(line[i]))
			
		consonant++;
	}

	cout << "The number of consonants is " <<  consonant << endl << endl;
	
	
	return 0;
}