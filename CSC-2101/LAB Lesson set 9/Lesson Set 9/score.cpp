/*
	Title:  score.cpp
	Author: Rezvi Ahmed
	Date:	04/08/2015
	Purpose:	This program will read scores into an array and will find 
				and print out the average of the score.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
float* makeArray(int);
float findAverage(float *, int);

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


//****************************************************************************
//                                 makeArray
//
// task:          This function receives the number of scores to read scores into an array
//				  and returns a pointer to a dynamically created array.
// data in:       number of scores in int.
// data returned: a pointer to a dynamically created array.
//
//****************************************************************************


float *makeArray(int numOfScore)
{
	float *scores;
	scores = new float[numOfScore];
	return scores;
}


//****************************************************************************
//                                 findAverage
//
// task:          This function receives an array of float and its size.
//                It finds and returns the average of the numbers in the array
// data in:       array of floating point numbers
// data returned: avarage of the numbers in the array
//
//****************************************************************************

float findAverage(float* scores, int size)
{
	float sum = 0.0;	// holds the sum of all the numbers
	
	for(int i = 0; i < size; i++)
	{
		sum += *(scores+i);
	}
	
	return (sum/size);	// returns the average
}