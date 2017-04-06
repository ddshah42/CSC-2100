#ifndef _POLLUTION_H
#define _POLLUTION_H

/*
	File Name: pollution.h
	Author: Dhairya Shah
	Date: November 9, 2016
	Program: This file has all the prototype.
*/


#include "pollution.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int size = 3;	//number of factories
const float CO_MAX_LIMIT = 35;	//35 ppm per hour
const float NO2_MAX_LIMIT = 100;//100 ppb per hour	
const float O3_MAX_LIMIT = .070;//.070 ppm per 8 hours

//function prototypes
void enterFactoryNames(string*);
float *makeArray(int);
void enterCOData(float*, int);
void enterNO2Data(float*, int);
void enterO3Data(float*, int);
void printOverLimit(string*, float**, int, float);
void getLargest(string*, float**, int, string&, float&, int&);


#endif