/*
	Title:  nestedRect_struct.cpp
	Author: Rezvi Ahmed
	Date:	04.16.2015
	Purpose:	This program uses a structure to hold data about a rectangle
				It calculates the area and perimeter of a box
*/
#include <iostream>
#include <iomanip>
using namespace std;

// declares the structure dimensions.
struct dimensions
{
	float length, width;
};

// declares the structure results.
struct results
{
	float area, perimeter;
};

// declares the structure rectangle.
struct rectangle
{
	dimensions sizes;
	results attributes;
};

//function prototypes
float computeArea(rectangle);
float computePerimeter(rectangle);

int main()
{
	// Fill in code to define a rectangle structure variable named box.
	rectangle box;
	
	cout << "\nEnter the length of a rectangle: ";
	// Fill in code to read in the length to the appropriate location
	cin >> box.sizes.length;
	
	cout << "Enter the width of a rectangle: ";
	// Fill in code to read in the width to the appropriate location
	cin >> box.sizes.width;
	
	cout << endl;
	
	// Fill in code to compute the area and store it in the appropriate location
	box.attributes.area=computeArea(box);
	// Fill in code to compute the perimeter and store it in the appropriate location
	box.attributes.perimeter=computePerimeter(box);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << box.attributes.area << endl;
	cout << "The perimeter of the rectangle is " << box.attributes.perimeter;
	cout << endl << endl;
	return 0;
}


float computeArea(rectangle box)
{
	return box.sizes.length * box.sizes.width;
}


float computePerimeter(rectangle box)
{
	return 2*(box.sizes.length + box.sizes.width);
}