/*
	Title:  	calculateShape.cpp
	Author:  	Dhairya Shah
	Date: 		16 march, 2016
	Purpose:  	To calculate the area, length, perimeter, and width.
*/

#include "calculateShape.h"
 int menu();

int main()
{
	int choice;
	float length, width, height, sideA, sideB, sideC, area, perimeter;
	cout << setprecision(2) << fixed;
	
	do
	{
		//display the menu to the user and get the user's choice
		choice = menu();
		
		//use a switch to execute the necessary statements based on user's choice
		switch(choice)
		{
			case 1:
				//get the necessary input from the user
				cout << "\n\nWhat is the length of a side of the square?\n";
				cin >> length;
			
				//call the function to calculate square
				//!!!!!!!!!!!!!!!!!!!!!  ADD FUNCTION CALL HERE!!!!!!!!!!!!!!!!!!
				calculateShape(area, perimeter,length);

				//print the results
				cout << "\n\nThe area of the square is " << area << endl;
				cout << "The perimeter of the square is " << perimeter << endl;
				break;
			case 2:
				//get the necessary input from the user
				cout << "\n\nWhat is the length of the rectangle?\n";
				cin >> length;
				cout << "What is the width of the rectangle?\n";
				cin >> width;
				
				//call the function to calculate rectangle
				//!!!!!!!!!!!!!!!!!!!!!  ADD FUNCTION CALL HERE!!!!!!!!!!!!!!!!!!
				calculateShape(area, perimeter, length, width);
				//print the results
				cout << "\n\nThe area of the square is " << area << endl;
				cout << "The perimeter of the square is " << perimeter << endl;
				break;
			case 3:
				//get the necessary input from the user
				cout << "\n\nI am going to need know the base (side B) of the triangle,\n";
				cout << "height of the triangle, and then the other two sides (side A & side B)\n";
				
				cout << "                ..       \n";
				cout << "              .  |.      \n";
				cout << "        A   .    | .     \n";
				cout << "          .     H|  . C  \n"; 
				cout << "        .        |   .   \n"; 
				cout << "      . . . . . .|. . .  \n";
				cout << "              B (base)   \n\n";
								
				cout << "BASE (SIDE B):  ";
				cin >> sideB;
				cout << "HEIGHT (H):  ";
				cin >> height;
				cout << "SIDE A:  ";
				cin >> sideA;
				cout << "SIDE C:  ";
				cin >> sideC;
								
				//call the function to calculate rectangle
				//!!!!!!!!!!!!!!!!!!!!!  ADD FUNCTION CALL HERE!!!!!!!!!!!!!!!!!!
				calculateShape(area, perimeter, sideB, height, sideA, sideC);
				//print the results
				cout << "\n\nThe area of the square is " << area << endl;
				cout << "The perimeter of the square is " << perimeter << endl;
				break;	
			case 4:
				cout << "\n\nGoodbye!  Have a nice day!\n\n";		
		}
	} while(choice != 4);
	
	return 0;
}

