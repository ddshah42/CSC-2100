/*
	Title:  nested.cpp
	Author: Rezvi Ahmed
	Date:   02/26/2015
	Purpose:
			This program finds the average time spent programming by a
			student each day over a three day period.
*/
#include <iostream>
using namespace std;

int main()
{
    
    int numStudents, numOfDays;
	float numHoursP, numHoursB, totalP,totalB, averageP, averageB;
	int student, day = 0; //these are the counters for the loops
	
	cout << "\n\nThis program will find the average number of hours a day";
	cout << " each given student spent on programming and on biology over a long weekend.";
	cout << "\n\nHow many students are there?" << endl;
	cin >> numStudents;
    cout << "\nEnter the number of days in the long weekend" << endl;
    cin >> numOfDays;
	
	for(student = 1; student <= numStudents; student++)
	{
		totalP = 0;
        totalB = 0;
		for(day = 1; day <= numOfDays; day++)
		{
			cout << "\nEnter student ";
			cout << student << " day " << day << " programming hrs:" << endl;
			cin >> numHoursP;
            cout << "\nEnter student ";
            cout << student << " day " << day << " biology hrs:" << endl;
            cin >> numHoursB;
            
			totalP = totalP + numHoursP;
            totalB = totalB + numHoursB;
		}

        averageP = totalP / numOfDays;
        averageB = totalB / numOfDays;
		
		cout << endl;
		cout << "The average number of hours per day spent on programming by ";
		cout << "student " << student << " is " << averageP << endl;
        cout << "The average number of hours per day spent on biology by ";
        cout << "student " << student << " is " << averageB << endl;
        if (averageP > averageB)
            cout << "The student averaged more time on programming.\n\n";
        else if (averageP < averageB)
            cout << "The student averaged more time on Biology.\n\n";
        

	}
		
	return 0;
}