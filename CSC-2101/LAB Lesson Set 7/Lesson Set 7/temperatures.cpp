/*
	Title:
	Author:
	Date:	
	Purpose:	This program will get input of temperatures for consecutive days from the user.
				It will store these values into an array and call a function that will
				return the average of the temperatures. It will also call a function that
				will return the highest temperature and a function that will return
				the lowest temperature. There will be a maximum of 50 temperatures.
*/


#include <iostream>
#include <iomanip>

using namespace std;


float findAverage(float [], int);	//finds average of all temperatures
float findHighest(float [], int);	// finds highest of all temperatures
float findLowest(float [], int);	// finds lowest of all temperatures

int main()
{
	int numOfTemp;
	float getTemperature[50];	// the array holding the temperatures.
	float avgOfTemp;			// contains the average of the temperatures.
	float highestTemp;			// contains the highest grade.
	float lowestTemp;			// contains the lowest grade.

	cout << "Please input the number of temperatures to be read: ";
	cin >> numOfTemp;

	for (int i = 0; i < numOfTemp; i++)
	{
		cout << "Input temperature " << (i + 1) << ": ";
		cin >> getTemperature[i];
	}

	cout << setprecision(2) << fixed;
	cout << endl << endl;

	avgOfTemp = findAverage(getTemperature, numOfTemp);
	cout << "The average temperature is " << avgOfTemp << endl;

	highestTemp = findHighest(getTemperature, numOfTemp);
	cout << "The highest temperature is " << highestTemp << endl;

	lowestTemp = findLowest(getTemperature, numOfTemp);
	cout << "The lowest temperature is " << lowestTemp << endl << endl;


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
float findAverage(float array[], int size)
{
	float sum = 0.0;   // holds the sum of all the numbers

	for (int i = 0; i < size; i++)
		sum = sum + array[i];

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
float findHighest(float array[], int size)
{
	float highest = array[0];

	for(int i = 0; i < size; i++)
    {
        if(array[i] > highest)
        highest = array[i];
    }
    return highest;
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
float findLowest(float array[], int size)
{
	float Lowest = array[0];

	for(int i = 0; i < size; i++)
    {
        if(array[i] < Lowest)
        Lowest = array[i];
    }
    return Lowest;
}
