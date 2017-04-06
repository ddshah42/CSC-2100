/*
	Title:  distance.cpp
	Author:  (Dhairya Shah)
	Date:  (January 28, 2016)
	Purpose:  Practice with output
*/
#include <iostream>
using namespace std;
int main()

{
	double numOftotalgallons = 20;
	double numOfmilesintown = 21.5;
	double numofmilesonhighway = 26.8;

	double totalTown;
	double totalHighway;

	totalTown = numOftotalgallons * numOfmilesintown;
	totalHighway = numOftotalgallons * numofmilesonhighway;
   
    cout << "The Acura MDX can travel " << totalTown << " miles if driving in town."<<endl;
	cout << "The Acura MDX can travel " << totalHighway  << " miles if driving on the highway."<<endl;

	return 0;
}