/*
	Title:  cubscout.cpp
	Author: Rezvi Ahmed
	Date:	04.16.2015
	Purpose:	This program uses a structure to store information about CUB SCOUT and
				it prints out the informations.
*/

#include <iostream>
#include <string>

using namespace std;

// declares the structure CubScout.
struct CubScout
{
	string nameOfCubScout, nameOfDen;
	int gradeOfCubScout;
};

//function prototypes
CubScout *makeArray(int);
void enterCubScouts(CubScout *, int);
void printCubScout(CubScout *, int);

int main()
{
	int numOfCubScout;
	CubScout *cubScouts;

	cout << endl << endl;
	cout << "How many cub scouts are in your pack?" << endl;
	cin >> numOfCubScout;
	cin.ignore();

	cubScouts = makeArray(numOfCubScout);		//calls makeArray function.
	enterCubScouts(cubScouts, numOfCubScout);	//calls enterCubScouts function.
	printCubScout(cubScouts, numOfCubScout);	//calls printCubScout function.

	//free the memory.
	delete [] cubScouts;
	cubScouts = 0;
	return 0;
}

//****************************************************************************
//                                 makeArray
//
// task:          This function receives the number of cub scouts
//				  to read information of cub scouts into an array
//				  and returns a pointer to a dynamically created array.
// data in:       number of cub scouts in int.
// data returned: a pointer to a dynamically created array.
//
//****************************************************************************

CubScout *makeArray(int numOfCubScout)
{
	CubScout *cubScouts;
	cubScouts = new CubScout[numOfCubScout];	//dynamically allocated array.

	return cubScouts;
}

//****************************************************************************
//                                 enterCubScouts
//
// task:          This function accepts the pointer to the allocated
//				  array and the number of cub scouts.
// data in:       array of "CubScout" type and number of cub scout in int.
// data returned: none
//
//****************************************************************************

void enterCubScouts(CubScout *e, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << "\nCUB SCOUT " << (i+1) << ": \n";
		cout << "NAME: ";
		getline(cin, (e+i)->nameOfCubScout);
		cout << "\nGRADE (1-5): ";
		cin >> (e+i)->gradeOfCubScout;
		cin.ignore();
		cout << "\nDEN NAME: ";
		getline(cin, (e+i)->nameOfDen);
		cout << endl;
	}
}

//****************************************************************************
//                                 printCubScout
//
// task:          This function prints out the array contents in a neat, organized way
// data in:       array of "CubScout" type and number of cub scout in int.
// data returned: none
//
//****************************************************************************


void printCubScout(CubScout *e, int size)
{
	cout << "-------------------------------------------------------------------\n\n";
	for(int i = 0; i < size; i++)
	{
		cout << "CUB SCOUT " << (i+1) << ": \n";
		cout << "NAME: ";
		cout << (e+i)->nameOfCubScout << endl;
		cout << "\nGRADE (1-5): ";
		cout << (e+i)->gradeOfCubScout << endl;
		cout << "\nDEN NAME: ";
		cout << (e+i)->nameOfDen << endl <<endl;
	}
	cout << "\n-------------------------------------------------------------------\n\n";
}
