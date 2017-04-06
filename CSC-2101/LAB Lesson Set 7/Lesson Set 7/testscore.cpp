/*
	Title:  testscore.cpp
	Author: Rezvi Ahmed
	Date:	04/01/2015
	Purpose:	This program will read in a group of test scores( positive integers from 1 to 100)
				from the keyboard and then calculates and outputs  the average score
				as well as the highest and lowest score. There will be a maximum of 100 scores.
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

float findAverage (const float [], int);  // finds average of all grades
float findHighest (const float [], int);  // finds highest of all grades
float findLowest  (const float [], int);  // finds lowest of all grades

int main()
{
	ifstream infile;
		
	float grades[100];              // the array holding the grades.
	int numberOfGrades;            // the number of grades read.
	int pos;                        // index to the array.

	float avgOfGrades;              // contains the average of the grades.
	float highestGrade;               // contains the highest grade.
	float lowestGrade;                // contains the lowest grade.

	
	pos = 0;
	
	infile.open("grades.txt");
	infile >> grades[pos];
	
	while (infile)
	{
		pos = pos +1; //increment subscript
		
		infile >> grades[pos];
	}
	cout << endl << endl;

	cout << setprecision(1) << fixed;

	numberOfGrades = pos; 
	
	avgOfGrades = findAverage(grades, numberOfGrades); 

	cout << endl << "The average of all the grades is " << avgOfGrades << "%" << endl;

	highestGrade = findHighest(grades, numberOfGrades);
	
	cout << endl << "The highest grade is " << highestGrade << "%" << endl;

	lowestGrade = findLowest(grades, numberOfGrades);

	cout << endl << "The lowest grade is " << lowestGrade << "%" << endl;
	cout << endl << endl;

	infile.close();
	
	return 0;
}

//****************************************************************************
//                                 findAverage
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the average of the numbers in the array
// data in:       array of floating point numbers
// data returned: avarage of the numbers in the array
//
//****************************************************************************
float findAverage(const float array[], int size)
{
	float sum = 0.0;   // holds the sum of all the numbers

	for (int pos = 0; pos < size; pos++)
		sum = sum + array[pos];

	return (sum / size);  // returns the average
}

//****************************************************************************
//                                 findHighest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the highest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************
float findHighest(const float array[], int size)
{
	float temp = array[0];
	
	for(int i = 0; i < size; i++)
    {
        if(array[i] > temp)
        temp = array[i];
    }
    return temp;
}

//****************************************************************************
//                                 findLowest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the lowest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************
float findLowest(const float array[], int size)
{
	float temp = array[0];
	
	for (int i = 0; i < size; i++)
	{
		if(array[i] < temp)
		temp = array[i];
	}
	return temp;
}