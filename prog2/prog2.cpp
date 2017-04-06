/*
	Title:  MASH.cpp
	Author: Dhairya Shah
	Date:	02/29/2016
	Purpose:
		This program asks the user multiple questions and 
		then randomly generates answers based on the answers to predict the user’s future.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

srand((unsigned)time(0));
string person1, person2, person3;
string cityState1, cityState2, cityState3;
string job1, job2, job3;
string compRes1, compRes2, compRes3;
string car1, car2, car3;
string mash;
int children1, children2, children3;
int salary1, salary2, salary3;
int randomGen;
int menuInput;
bool playAgain = true;	//Boolean variable to control the main loop that will allow
						//the user to play MASH as many times as he or she wants.

do{
	cout << "\n\nPick from the following menu :" << endl;
	cout << "1.	Let's play MASH!\n";
	cout << "2.	End program.\n";
	cin >> menuInput;
	cin.ignore();
	switch(menuInput)
	{
		case 1:
		{
			cout << "You choose to play MASH!\n";
		//Names of three people.
			cout << "\nEnter in one person you like: ";
			getline(cin, person1);
			cout << "\nEnter in another person you like: ";
			getline(cin, person2);
			cout << "\nEnter in a person you hate: ";
			getline(cin, person3);
		//Three integer numbers between 1 and 100.
			cout << "\nEnter three numbers between 1 and 100, seperated by a space.\n";
			cin >> children1;
			cin >> children2;
			cin >> children3;
			//validates user input with while loops.
			while(children1 < 1 || children1 > 100 )
			{
				cout << "The first number you entered was invalid.\n";
				cout << "Enter a number between 1 and 100.\n";
				cin >> children1;
			}
			while(children2 < 1 || children2 > 100 )
			{
				cout << "The second number you entered was invalid.\n";
				cout << "Enter a number between 1 and 100.\n";
				cin >> children2;
			}
			
			while(children3 < 1 || children3 > 100 )
			{
				cout << "The third number you entered was invalid.\n";
				cout << "Enter a number between 1 and 100.\n";
				cin >> children3;
			}
			cin.ignore();
		//Three locations including city & state.
			cout << "\nEnter in one city, state you like: ";
			getline(cin, cityState1);
			cout << "\nEnter in another city, state you like: ";
			getline(cin, cityState2);
			cout << "\nEnter in one city, state you hate: ";
			getline(cin, cityState3);
		//Three job titles.
			cout << "\nEnter in an awesome job title: ";
			getline(cin, job1);
			cout << "\nEnter in another awesome job title: ";
			getline(cin, job2);
			cout << "\nEnter in the worst job title ever: ";
			getline(cin, job3);
		//Three companies or restaurants.
			cout << "\nEnter a company or restaurant you like: ";
			getline(cin, compRes1);
			cout << "\nEnter another company or restaurant you like: ";
			getline(cin, compRes2);
			cout << "\nEnter a company or restaurant you hate: ";
			getline(cin, compRes3);
		//Three integer numbers between 10000 and 500000.
			cout << "\nEnter three numbers between 10,000 and 500,000, seperated by a space.\n";
			cin >> salary1;
			cin >> salary2;
			cin >> salary3;
			//validates user input with while loops.
			while(salary1 < 10000 || salary1 > 500000 )
			{
				cout << "The first number you entered was invalid.\n";
				cout << "Enter a number between 10,000 and 500,000.\n";
				cin >> salary1;
			}
			while(salary2 < 10000 || salary2 > 500000 )
			{
				cout << "The second number you entered was invalid.\n";
				cout << "Enter a number between 10,000 and 500,000.\n";
				cin >> salary2;
			}
			
			while(salary3 < 10000 || salary3 > 500000 )
			{
				cout << "The third number you entered was invalid.\n";
				cout << "Enter a number between 10,000 and 500,000.\n";
				cin >> salary3;
			}
			cin.ignore();
		//Three types of cars.
			cout << "\nEnter in a car that you like: ";
			getline(cin, car1);
			cout << "\nEnter in another car that you like: ";
			getline(cin, car2);
			cout << "\nEnter in a car that you hate: ";
			getline(cin, car3);


			cout << "\n\n******   MASH RESULT   ******"<< endl;
		//Predicts the user’s type of house randomly.
			randomGen = (rand() % 4) + 1;
			switch (randomGen)
		{
			case 1:cout << "You will live in a Mansion." << endl;
			break;
			case 2:cout << "You will live in an Apartment." << endl;
			break;
			case 3:cout << "You will live in a Shack." << endl;
            break;
			default:cout << "You will live in a House." << endl;
		}
		//Predicts the user’s spouse by 
		//selecting one of their three inputs randomly.
			randomGen = (rand() % 3) + 1;
			switch (randomGen)
		{
			case 1:cout << "You will be happily married to " << person1 << "." << endl;
			break;
			case 2:cout << "You will be happily married to " << person2 << "." << endl;
			break;
			default:cout << "You will be happily married to " << person3 << "." << endl;
		}
		//Predicts The number of children the user will have by 
		//selecting one of their three inputs randomly.
			randomGen = (rand() % 3) + 1;
			switch (randomGen)
		{
			case 1:cout << "You and your spouse will have " << children1 << "." << endl;
			break;
			case 2:cout << "You and your spouse will have " << children2 << "." << endl;
			break;
			default:cout << "You and your spouse will have " << children3 << "." << endl;
		}
		//Predicts Where the user will live by 
		//selecting one of their three inputs randomly.
			randomGen = (rand() % 3) + 1;
			switch (randomGen)
		{
			case 1:cout << "You will live in " << cityState1 << "." << endl;
			break;
			case 2:cout << "You will live in " << cityState2 << "." << endl;
			break;
			default:cout << "You will live in " << cityState3 << "." << endl;
		}
		//Predicts Where the user will work, their job title, and their salary by 
		//selecting one of their three inputs randomly.
			randomGen = (rand() % 3) + 1;
			switch (randomGen)
		{
			case 1:cout << "You will work at "<< compRes1 << " as a "<< job1 <<" making $"<< salary1 << "a year." << endl;
			break;
			case 2:cout << "You will work at "<< compRes2 << " as a "<< job2 <<" making $"<< salary2 << "a year." << endl;
			break;
			default:cout << "You will work at "<< compRes3 << " as a "<< job3 <<" making $"<< salary3 << "a year." << endl;
		}
		//Predicts What the user will drive by 
		//selecting one of their three inputs randomly.
			randomGen = (rand() % 3) + 1;
			switch (randomGen)
		{
			case 1:cout << "You will drive a " << car1 << "." << endl;
			break;
			case 2:cout << "You will drive a " << car2 << "." << endl;
			break;
			default:cout << "You will drive a " << car3 << "." << endl;
		}
			
		break;
		}
			
		case 2: //ends the program.
		{
			cout << "You choose to end the program.\n";
			cout << "Bye!\n";
			playAgain = false;
		break;
		}
		default: //forces the user to enter a valid input.
			cout << "Invalid input\n";
		}
}while(playAgain == true);

return 0;
}