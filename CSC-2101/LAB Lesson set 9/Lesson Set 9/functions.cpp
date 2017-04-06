/*
	Title:  functions.cpp
	Author: Rezvi Ahmed
	Date:	04/08/2015
	Purpose:	contains all programmer defined functions.
*/

#include "scoreB.h"		// includes header file.

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
	float sum = 0.0;		// holds the sum of all the numbers
	
	for(int i = 0; i < size; i++)
	{
		sum += *(scores+i);
	}
	
	return (sum/size);		// returns the average
}