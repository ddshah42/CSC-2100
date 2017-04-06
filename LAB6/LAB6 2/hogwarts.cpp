// filename: hogwarts.cpp
// author: Dhairya Shah
// major: computer science
// date: 3/1/2016
// purpose: this program calculates the tuition at Hogwarts school of WitchCraft and Wizardry.
#include <iostream>
using namespace std;


int main()
{
char starter;
starter = 'y'; // starter for the while loop

	
	
while (starter =='y'||starter=='Y') // define the wile loop
	{
		//turn all the / and ' to ascii
		string back;
		back= 92;
		string quote;
		quote=39;
		// print the header
cout<<"  ."<<quote<<"(     .-./(     )"<<back<<".-.        ."<<quote<<"(     /`-.      /`-.  .-,.-.,-.   )"<<back<<".--.  "<<endl;
cout<<" ,"<<quote<<") "<<back<<"  )  ,"<<quote<<"     )  ,"<<quote<<" ,-,_)   ,"<<quote<<") "<<back<<"  )  ,"<<quote<<" _  "<<back<<"   ,"<<quote<<" _  "<<back<<" ) ,, ,. (  (   ._."<<quote<<" "<<endl;
cout<<"(  "<<quote<<"-"<<quote<<" (  (  .-, (  (  .   __  (  /(/ /  (  "<<quote<<"-"<<quote<<" (  (  "<<quote<<"-"<<quote<<" ( "<<back<<"( |(  )/   `-.`.   "<<endl;
cout<<") .-.  )  ) "<<quote<<"._"<<back<<" )  ) "<<quote<<"._"<<back<<" _)  )    (    )   _  )  ) ,_ ."<<quote<<"    ) "<<back<<"     ,_ (  "<<back<<"  "<<endl;
cout<<"(  ,  ) "<<back<<" (  ,   (  (  ,   (   (  ."<<quote<<""<<back<<" "<<back<<"  (  ,"<<quote<<" ) "<<back<<" (  "<<quote<<" ) "<<back<<"    "<<back<<" (    (  "<<quote<<".)  ) "<<endl;
cout<<" )/    )/  )/ ._."<<quote<<"   )/"<<quote<<"._."<<quote<<"    )/   )/   )/    )/  )/   )/     )/     "<<quote<<"._,_."<<quote<<"  "<<endl;


	char in_out; // variable for in-state or out-of-state
	char house_shack; //variable for living on campus
	
		
		//print statements
	cout<<"Welcome to Hogwarts school of WitchCraft and Wizardry"<<endl; 
	cout<< "Please input 'I' if you are in-country or 'O' if you are out-of-country"<<endl;
	cin>>in_out; //read in input
	cout<<""<<endl;
	cout<<"Please input 'Y' if you will be staying in one of the four houses and 'N' if you will be hiding out in the Shrieking Shack."<<endl;
	cin>>house_shack;
	
	
	if (in_out=='I'||in_out=='i') // evaluate the cost for instate
	{
		if (house_shack=='Y'|| house_shack=='y')
			cout<<"Your total bill for this semester is: $5,500"<<endl;
		else
			cout<<"Your total bill for this semester is: $3,000"<<endl;
	}
	else //evaluate the cost for out of state
	{//if (in_out=='O'|| in_out=='o')
		if (house_shack=='Y'|| house_shack=='y')
			cout<<"Your total bill for this semester is: $8,000"<<endl;
		else
			cout<<"Your total bill for this semester is: $4,500"<<endl;
	}
	
	cout<<"would you like to run the program again? (y/n)"<<endl; // should it run again?
	cin>>starter; 
	
}
return 0;

}


