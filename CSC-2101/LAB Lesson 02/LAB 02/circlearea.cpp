/*
	Title:  circlearea.cpp
	Author: Rezvi Ahmed
	Date: 01/29/2015
	Purpose:  THis program will output the circumference and area of the circle with a given radius
*/

#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
    float  area;		//definition of area of circle
	int circumference;	//definition of circumference
	
	circumference = 2 * PI * RADIUS;	//computes circumference
	area = PI * pow(RADIUS, 2);		//computes area
    
    cout << "\n\nThe circumference of the circle is " << circumference << endl;
    cout << "The area of the circle is " << area << "\n\n";
    
	
	//Fill in the code for the cout statement that will output (with description) the circumference
	
	//Fill in the code for the cout statement that will output (with description) the area of the circle
	
	return 0;
}