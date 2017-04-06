/*
	Title:  	functions.cpp
	Author:  	Dhairya Shah
	Date: 		16 march, 2016
	Purpose:  	calculates
*/

#include "calculateShape.h"


int menu()
{
	int choice;
	
	cout << "\n\nPlease choose from the following options:\n";
	cout << "1. Calculate area & perimeter of a square.\n";
	cout << "2. Calculate area & perimeter of a rectangle.\n";
	cout << "3. Calculate area & perimeter of a triangle.\n";
	cout << "4. Quit the program.\n";
	cout << "CHOOSE 1-4:  ";
	cin >> choice;
	while (choice < 1 || choice > 4)
	{
		cout << "Sorry, that is not one of the choices.\n";
		cout << "CHOOSE 1-4:  ";
		cin >> choice;
	}
	return choice;
}

/*
	function:  calculate()
	purpose:  to calculate the area and perimeter of a square
*/
//!!!!!!!!!!!!!!!!!!!!!  ADD FUNCTION DEFINITION HERE!!!!!!!!!!!!!!!!!!
void calculateShape(float& area, float& perimeter, float height){
	area = height * height;
	perimeter = 4 * height;
}
/*
	function:  calculate()
	purpose:  to calculate the area and perimeter of a rectangle
*/
//!!!!!!!!!!!!!!!!!!!!!  ADD FUNCTION HEADER HERE!!!!!!!!!!!!!!!!!!
void calculateShape(float& a, float& p, float len, float wid)
{
	a = len * wid;
	p = (2.0 * len) + (2.0 * wid);
}

/*
	function:  calculate()
	purpose:  to calculate the area and perimeter of a triangle
*/
//!!!!!!!!!!!!!!!!!!!!!  ADD FUNCTION HEADER HERE!!!!!!!!!!!!!!!!!!
void calculateShape(float& a, float& p, float sb, float h, float sa, float sc)
{
	a = (sb * h) / 2.0;
	p = sa + sb + sc;
}



