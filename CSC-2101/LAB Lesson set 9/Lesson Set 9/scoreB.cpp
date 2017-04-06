/*
	Title:  scoreB.cpp
	Author: Rezvi Ahmed
	Date:	04/08/2015
	Purpose:	contains main function.
*/

#include "scoreB.h"		// includes header file.

int main()
{
	int numOfScore;		// number of scores.
	float* scores;		// array of pointers to float.
	float avgOfScore;	// average of scores.
		
	cout << "\nPlease input the number of scores\n";
	cin >> numOfScore;
	cout << endl;
	
	scores = makeArray(numOfScore);	//calls makeArray(int) function and assigns it to pointer scores.

	for(int i = 0; i < numOfScore; i++)
	{
		cout << "Please enter a score\n";
		cin >> *(scores+i);
	}
	
	cout << setprecision(1) << fixed;
	cout << endl << endl;
	
	avgOfScore = findAverage(scores, numOfScore);	//calls makeArray(int) function and 
													//assigns it to pointer scores.
	cout << "The average of the scores is " << avgOfScore << endl << endl;

	// Free the memory.
	delete [] scores;
	scores = 0;
	return 0;
}