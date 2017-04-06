/*
	Title:
	Author: Dhairya Shah
	Date: February 3, 2016
	Purpose: INCREMENTAL PROGRAMMING!
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double carbon, air, Helium, Hydrogen, speed;
    int choice;
    float second;
    float total;
    cout << "\nThe speed of sound in gases depends primarily on the density of gas. \n";
    
    cout << "\nChoose a gas below:\n";
    cout << "1. Carbon Dioxide"<<endl;
    cout << "2. Air "<<endl;
    cout << "3. Helium"<<endl;
    cout << "4. Hydrogen"<<endl;
up:    cout << "CHOOSE 1-4: ";
    cin >> choice;
    if(choice > 4 || choice < 1)
	{
		cout<<"\n Invalid Choice\n";
 goto up;
	}
sec : cout<<"\nEnter the number of seconds it took for the sound to travel in this gas from its source to the location at which it was detected.\nSECONDS:  ";
	cin>>second;
if(second < 0 || second >30)
{
cout<<"\n Invalid time. Choose a time between 0 and 30 seconds. \n";
goto sec;
}
    switch(choice)
{
 case 1: 
	total=(258.0*second);
	cout<<"\nThe Carbon Dioxided was "<<total<<" meters away from the detection location!\n";
	break;
 case 2:
	total=(331.5*second);
	cout<<"\nThe Air was "<<total<<" meters away from the detection location!\n";
	break;
 case 3:
	total=(972.0*second);
	cout<<"\nThe Helium was "<<total<<" meters away from the detection location!\n";
	break;
 case 4:
	total=(1270.0*second);
	cout<<"\nThe Hydrogen was "<<total<<" meters away from the detection location!\n";
	break;
 default:
	cout<<"\ninvalid choice";
        
}
    
   return 0;
}