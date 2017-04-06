/*
	Title:  grade.cpp
	Author: Rezvi Ahmed
	Date:   02/05/2015
	Purpose:
		This program will read in three grades.
		It will then print out the average of the three grades in 2 decimal places.
		The input will come from the keyboard and the output will go to
		the screen.
*/




#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float firstGrade, secondGrade, thirdGrade, average; //contains the first grade, second grade, 
	//third grade and the average of three grades
	
	cout << setprecision(2) << fixed << showpoint; //formatted output
	
	cout << "\n\nPlease input the first grade " << endl; // prompt for first grade
	cin >> firstGrade; // input statement for the first grade
	
	cout << "\n\nPlease input the second grade " << endl; // prompt for second grade
	cin >> secondGrade; // input statement for the second grade
	
	cout << "\n\nPlease input the third grade " << endl;  // prompt for third grade
	cin >> thirdGrade; // input statement for the third grade
	
    average = (firstGrade + secondGrade + thirdGrade)/3; //statement to determine the average
	
	cout << "\n\nThe average of the three grades is: " << average << "\n\n"; // output statement to print 
	//the average of the three grades
	
    return 0;
	}