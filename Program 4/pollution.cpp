/*
	File Name: pollution.cpp
	Author: Dhairya Shah
	Date: November 9, 2016
	Program: This file contains main function 
*/
#include "pollution.h"
using namespace std;

int main()
{
	string* nameOfCompany = new string[size];
	float* ptr[size];
	float* arr[size];
	float* data[size];
	float level;
	int value;
	string largestValue;
	int years;

	//print out doted line on the start
	string dottedLine(60, '-');

	cout << endl << endl;
	cout << dottedLine << endl;
	cout << endl;
	cout << dottedLine << endl;
	cout << endl << endl;

	//calling functions
	enterFactoryNames(nameOfCompany);
	cout << endl;
	cout << "How many years of data do you have? " << endl;
	cin >> years;
	cout << endl << endl;

	cout << "Please enter data for each factory." << endl;
	cout << dottedLine << endl << endl;

	//loop for constant size
	for(int i = 0; i < size; i++)
	{
		cout << endl << endl;
		cout << "FACTORY: " << *(nameOfCompany + i) << endl << endl;

		*(ptr + i) = makeArray(years);
		enterCOData(*(ptr + i), years);

		cout << endl;
		*(arr + i) = makeArray(years);
		enterNO2Data(*(arr + i), years);

		cout << endl;
		*(data + i) = makeArray(years);
		enterO3Data(*(data + i), years);

		cout << endl;
		cout << dottedLine << endl;
	}

	/*
		Printing out the final results
	*/
	cout << endl << dottedLine << endl << endl;

	cout << endl;
	cout << "FACTORIES over the CARBON MONOXIDE pollutant level (35): "  << endl;
	printOverLimit(nameOfCompany, ptr, years, CO_MAX_LIMIT);

	cout << endl;
	cout << "FACTORIES over the NITROGEN DIOXIDE pollutant level (100): " << endl;
	printOverLimit(nameOfCompany, arr, years, NO2_MAX_LIMIT);

	cout << endl;
	cout << "FACTORIES over the OZONE pollutant level (0.07): " << endl;
	printOverLimit(nameOfCompany, data, years, O3_MAX_LIMIT);
	cout << dottedLine << endl << endl << endl; 	

	getLargest(nameOfCompany, ptr, years, largestValue, level, value);
	cout << "The " << largestValue << " factory produced the most carbon monoxide " << endl;
	cout << "pollution with " << level << " parts per million in year " << value << ".";

	cout << endl << endl;
	getLargest(nameOfCompany, arr, years, largestValue, level, value);
	cout << "The " << largestValue << " factory produced the most nitrogen dioxide pollution " << endl;
	cout << "with " << level << " parts per million in year " << value << ".";

	cout << endl << endl;
	getLargest(nameOfCompany, data, years, largestValue, level, value);
	cout << "The " << largestValue << " factory produced the most ozone pollution pollution " << endl;
	cout << "with " << level << " parts per million in year " << value << ".";

	cout << endl << endl << endl;
	cout << dottedLine << endl;
	cout << dottedLine << endl;
	cout << endl << endl;

return 0;
}