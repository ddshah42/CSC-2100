/*
	Title:  grade.cpp
	Author: Rezvi Ahmed
	Date:	03/05/2015
	Purpose:
			This program will print out grade letter
*/


#include <iostream>

using namespace std;

void sumOfGrade (int, float, float&);

int main ()
{
	int numOfGrade;
	float avgGrade, numGrade, sumGrade = 0;
	char grade;
	cout << "Enter the number of grades" << endl;
	cin >> numOfGrade;
	for (int i = 0; i < numOfGrade; i++)
	{
		cout << "Input a numeric grade between 0-100" << endl;
		cin >> numGrade;
		sumGrade += numGrade;
	}
	sumOfGrade(numOfGrade, sumGrade, avgGrade);
	
	if (avgGrade >= 90 && avgGrade <= 100)
		grade = 'A';
	else if(avgGrade >= 80 && avgGrade <= 89)
		grade = 'B';
	else if(avgGrade >= 70 && avgGrade <= 79)
		grade = 'C';
	else if(avgGrade >= 60 && avgGrade <= 69)
		grade = 'D';
	else if(avgGrade >= 0 && avgGrade <= 59)
		grade = 'F';
	else 
	{
		cout << "Invalid input.\n";
		return 0;
	}
	
	cout << "The grade is " << grade << endl << endl;
		
	return 0;
}
	
void sumOfGrade (int numGrade, float sumGrade, float &avg )
{
	avg = sumGrade / numGrade;
}