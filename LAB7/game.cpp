/*
	Title:  	game.cpp
	Author:  	Dhairya Shah
	Date: 		16 march, 2016
	Purpose:  	This program plays you in a game of Rock/Paper/Scissors
 */
#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>

using namespace std;
int main()
{

    int choice;
    int i;
    int comp;
    char res;
    char main;
   
    unsigned seed;
    
    //The choices
    cout << "\nGame Menu.\n";
    cout << "----------\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choice: ";
    cin >> choice;
 	
 	int randomNumber;
    
    

  	/* initialize random seed: */
  	srand (time(NULL));


  	randomNumber = rand() % 3 + 1;

     //Now for the IF/Else statements.
    if (choice == 1) //Rock
	{   
		cout << "You selected: Rock.\n";
	    cout << "The computer selected: " << randomNumber<<endl;

	    if (randomNumber<choice){
	      cout << "User win: "<<endl; 
	    }
	    else if (randomNumber>choice) {
	      cout << "computer wins: "<<endl;
	    }
	    else if (randomNumber == choice){
	      cout << "Tie no winner:"<<endl;
	    }
	}
	    
	else if (choice == 2) //Paper
	{   
	    cout << "You selected: Paper.\n";
		
		cout << "The computer selected: " << randomNumber<<endl;

	    if (randomNumber<choice){
	      cout << "User win: "<<endl; 
	    }
	    else if (randomNumber>choice) {
	      cout << "computer wins: "<<endl;
	    }
	    else if (randomNumber == choice){
	      cout << "Tie no winner:"<<endl;
	    }
	}
	    
	else if (choice == 3) //Scissors
	{   
		cout << "You selected: Scissors.\n";
	    
	    cout << "The computer selected: " << randomNumber<<endl;

	    if (randomNumber<choice){
	      cout << "computer wins: "<<endl;
	    }
	    else if (randomNumber>choice) {
	      cout << "User win: "<<endl; 
	    }
	    else if (randomNumber == choice){
	      cout << "Tie no winner:"<<endl;
	    }
	}
	else if ( choice == 4)
	{
	    cout <<"\n";
	}
    

    while (choice < 1 || choice > 4)
	{
	    
	    cout << "Invalid selection. Enter 1, 2, 3, or 4:";
	    cin >> choice;
	    cout << endl;

	    cout << "The computer selected: " << randomNumber<<endl;

	    if (randomNumber<choice){
	      cout << "User win: "<<endl; 
	    }
	    else if (randomNumber>choice) {
	      cout << "computer wins: "<<endl;
	    }
	    else if (randomNumber == choice){
	      cout << "Tie no winner:"<<endl;
	    }
	}
	return choice;
        
}
