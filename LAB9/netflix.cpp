/*
	Title: netflix.cpp
	Author: Dhairya Shah
	Date:	03/30/2016
	Purpose: main function for netflix program
 */


#include "netflix.h"//includes netflix.h function
//main function
int main()
{
    
	int * netflix;
	int numStudents;
    
	cout << "\n\nHow many students were surveyed? ";
	cin >> numStudents;
    
    while(numStudents < 0){
        cout << "\n\nHow many students were surveyed? ";
        cin >> numStudents;
    }
	// pointer called
	netflix = makeArray(numStudents);
	cout << endl << endl;
    getStudentData(netflix, numStudents);
	cout << endl << endl;
    cout << "\nHours each student watched netflix in ascending order:";
    selectionSort(netflix, numStudents);
    cout <<endl<<endl;
    printArray(netflix, numStudents);
    cout << endl <<endl;
    
    
    cout << "------------------------------------------------------------\n";
    cout << "------------------------------------------------------------\n";
    cout << "                       NETFLIX STATISTICS                         \n";
    cout << "------------------------------------------------------------\n";

    
    getAverage(netflix, numStudents);
    cout <<endl<<endl;
    
    getMedian(netflix, numStudents);
    cout <<endl<<endl;
    
	
	delete [] netflix;
	return 0;
}