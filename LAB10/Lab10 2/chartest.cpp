// filename: chartest.cpp
// author: Dhairya Shah
// date: 4/7/2016
// purpose: this program shows the uppercase letter, lowecase letters and the digits in the given text.
#include <iostream>
//#include <string>
#include <fstream>
//#include <cstdlib>
#include <cctype>

// using namespace std;

int main()
{
	std::ifstream fin( "text.txt" ) ; // constructor opens the file

	// fin.open("input.doc");
	if (fin.fail())
	{
		std::cout << "Input file opening failed.\n\n" ; // << endl;
		// exit(1);
		return 1 ; // prefer return from main over std::exit()
	}

	
	int countNum = 0;
	int countCap = 0;
	int countLow = 0;
	
	char next;

	// fin.get(next);
	// while(!fin.eof())
	while( fin.get(next) ) // check for failure, (not eof)
	{

		if (std::isupper(next))
		{
			countCap++;
		}

		else if(std::islower(next))
		{
			countLow++;
		}

		else if(std::isdigit(next))
		{
			countNum++;
		}

		// fin.get(next);
	}

	std::cout
	          << "Uppercase characters: " << countCap << /* endl; */ '\n'
	          << "Lowercase characters: " << countLow << /* endl; */ '\n'
	          << "Digits: " << countNum << /* endl; */ '\n'
			  <<"\n";

	// fin.close(); // destructor closes the file

	// return 0; // implicit
}