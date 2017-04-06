/*
	Title:  newproverb.cpp
	Author: Rezvi Ahmed
	Date:	03/05/2015
	Purpose:
*/

#include <iostream>
#include <string>
using namespace std;

// Fill in the prototype of the function writeProverb.
int writeProverb(int wordCode);
int main ()
{
	int wordCode;
	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their "	<< endl;
	cout << "Input a 1 if you want the sentence to be finished with party"	<< endl;
	cout << "Input any other number for the word country" << endl;
	cout << "Please input your choice now" << endl;
	cin >> wordCode; 
	
	cout << endl; 
	
	writeProverb(wordCode);
	
	return 0;
}

// ******************************************************************************
// writeProverb
//
// task: This function prints a proverb. The function takes a number
// from the call. If that number is a 1 it prints "Now is the time
// for all good men to come to the aid of their party."
// Otherwise, it prints "Now is the time for all good men
// to come to the aid of their country."
// data in: code for ending word of proverb (integer)
// data out: no actual parameter altered
//
// *****************************************************************************
void writeProverb (int number)
{
	// Fill in the body of the function to accomplish what is described above
	switch (wordCode)
	{
		case 1:cout << "Now is the time for all good men to come to the aid of their party." << endl;
		default:cout << "Now is the time for all good men to come to the aid of their country."	<< endl;
	}
}