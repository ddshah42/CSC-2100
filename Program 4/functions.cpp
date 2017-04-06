/*
	File Name: functions.cpp
	Author: Dhairya Shah
	Date: November 9, 2016
	Program: This file includes all functions. 
*/
#include "pollution.h"
using namespace std;	

//ask user to enter 3 name of factory
void enterFactoryNames(string* nameOfCompany)
{
	int years;

	for(int i = 0; i < 3; i++)
	{
		cout << "Name of FACTORY " << (i + 1) << ":  ";
		getline(cin, *(nameOfCompany + i));
		cout << endl;
	}

}

//array
float *makeArray(int years)
{
	float *name;
	name = new float[years];
	return name;
}

//conversion for carbon monoxide
void enterCOData(float *ptr, int years)
{
	cout << endl;
	cout << "Carbon Monoxide (CO) average level per hour (in parts per million) " << endl;

	for(int i = 0; i < years; i++)
	{
		cout << "        YEAR " << (i + 1) << ":   ";
	 	cin >> *(ptr + i);
	}

	cout << endl;
}

//conversion for nitrogen dioxide
void enterNO2Data(float *arr, int years)
{
	cout << endl;
	cout << "Nitrogen Dioxide (NO2) average level per hour (in parts per billion) " << endl;

	for(int i = 0; i < years; i++)
	{
		cout << "        YEAR " << (i + 1) << ":   ";
	 	cin >> *(arr + i);
	}

	cout << endl;
}

//conversion for ozone gas
void enterO3Data(float *data, int years)
{
	cout << endl;
	cout << "Ozone (O3) average level per 8 hours (in parts per million) " << endl;

	for(int i = 0; i < years; i++)
	{
		cout << "        YEAR " << (i + 1) << ":   ";
	 	cin >> *(data + i);
	}

	cout << endl;

}

//limit which is used to calculate over limit
void printOverLimit(string* nameOfCompany, float **companyData, int years, float limits)
{
	bool ifalse = true;

	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < years; j++)
		{
			if(*(*(companyData + i) + j) > limits)
			{
				cout << * ( nameOfCompany + i);
				cout <<"\n";
				ifalse = false;
				break;
			}
		}
	}

	if(ifalse)
	{
		cout << "Yay! There are no factories over the limit. "  << endl;

	}
}

//largest pollution
void getLargest(string* nameOfCompany, float **companyData, int years, string& largestValue, float& level, int& value)
{
	level = 0;
	value = 0;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < years; j++)
		{
			if(level < *(*(companyData + i) + j))
			{
				level = *(*(companyData + i) + j);
				value = (j + 1);
				largestValue = *(nameOfCompany + i);
			}
		}
	}
}


