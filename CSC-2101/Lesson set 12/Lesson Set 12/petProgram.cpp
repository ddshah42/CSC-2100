/*
	Title:  petProgram.cpp
	Author: Rezvi Ahmed
	Date:	04.27.2015
	Purpose:	This program will store informations of pets to a file and 
				also prints the information from the file.
*/


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

// declares the structure Pet.
struct Pet
{
	string petName;
	string description;
	int age;
	bool dangerous;
};

// Function prototypes
int enterPetData(Pet[], int);
void printPetData(Pet[], int);
float convertToFloat(string);

int main()
{
	Pet myPets[50];
	int curNumPets = 0; //this is the current number of pets placed in the array (starts with zero)
	int menuChoice;
	bool goAgain = true;
	
	while(goAgain == true)
	{
		cout << endl << endl;
		cout << "Please choose from the following options: " << endl;
		cout << "1. Enter pet data. " << endl;
		cout << "2. Print pet data. " << endl;
		cout << "3. Quit the program. "<< endl;
		cout << "Choose 1-3: ";
		cin >> menuChoice;
	
		while(menuChoice < 1 || menuChoice > 3)
		{
			cout << "You did not enter a valid choice." << endl; 
			cout << "Please enter 1,2 or 3." << endl << endl;
			cin >> menuChoice;
		}
	
		switch(menuChoice)
		{
			case 1:
			{
				curNumPets = enterPetData(myPets, curNumPets);
				break;
			}
		
			case 2:
			{
				printPetData(myPets, curNumPets);
				break;
			}
			case 3:
			{
				cout << "\nGoodBye!" << endl << endl;
				goAgain = false;
				break;
			}
		
		}
	}
	
	return 0;
	
}

//*******************************************************************************
//                          enterPetData
//
// task:		  This procedure reads the information into an array.
// datain:		  This function receives an array of Pet type and its size.
// data returned: number of new array
//
//********************************************************************************

int enterPetData(Pet myPets[], int curNumPets)
{
	int choice;
	fstream inFile;
	char fileName[26];
	string numberReadFromFile; //use this when reading a number from the file
	string tempString;

	cin.ignore();
	cout << "\nPlease enter the name of the file that contains your pet data:  ";
	cin.getline(fileName, 26);
	
	inFile.open(fileName, ios::in);
	if(inFile)
	{
		getline(inFile, tempString, '$');  //read the first pet name from the file
		
		while(!inFile.eof()) //while we are not at the end of file
		{
			myPets[curNumPets].petName = tempString; //put the name of the pet inside the array petName member
			getline(inFile, myPets[curNumPets].description, '$');  //read description from file
			
			getline(inFile, numberReadFromFile, '$'); //read in the pets age from the file
			myPets[curNumPets].age = convertToFloat(numberReadFromFile); //convert the string to a float and then place in structure array
			
			getline(inFile, numberReadFromFile, '$'); //read in whether the pet is dangerous or not (1 means yes, 0 means no)
			myPets[curNumPets].dangerous = convertToFloat(numberReadFromFile); //convert the string to a float and then place in structure array
			
			curNumPets++; //move on to the next array element to start entering next pet info
			
			getline(inFile, tempString, '$');  //read the next pet name from the file	
		}
		
		cout << endl;
		cout << curNumPets << " pets from " << fileName << " have been added to the array." << endl;
		inFile.close();
	}
	else
		cout << "File could not be opened.\n\n";
	
	return curNumPets;
}

//***************************************************************************
//                          printPetData
//
// task:		  This procedure prints the pet data.
// datain:		  This function receives an array of Pet type and its size.
// data returned: none.
//
//****************************************************************************

void printPetData(Pet myPets[], int curNumPets)
{
	int choice;
	char fileName[26];
	fstream inFile;
	string horizontalLine(25,'-');

	cout << "\nWould you like to: " << endl;
	cout << "1. Print to the screen." << endl;
	cout << "2. Print to a file." << endl;
	cout << "choose 1-2: ";
	cin >> choice;
	
	while(choice < 1 || choice > 2)
	{
		cout << "You did not enter a valid choice." << endl; 
		cout << "Please enter 1 or 2" << endl << endl;
		cin >> choice;
	}
		
	switch(choice)
	{
		case 1:
		{
			for(int x=0; x<curNumPets; x++)
			{
				cout << "\n\nPET NAME:  " << myPets[x].petName << endl;
				cout << "\nDESCRIPTION:  " << myPets[x].description << endl;
				cout << "\nAGE: " << myPets[x].age << endl;
				if(myPets[x].dangerous == 0)
					cout << "\nDANGEROUS: no\n";
				else
					cout << "\nDANGEROUS: yes\n";
				cout << horizontalLine << endl;
			}
			
			break;
		}
		case 2:
		{
			cin.ignore();
			cout << "What is the name of the file?" << endl;
			cin.getline(fileName, 26);
			cout << endl;
		
			inFile.open(fileName, ios::out);
		
			for(int x=0; x<curNumPets; x++)
			{
				inFile << "\n\nPET NAME:  " << myPets[x].petName << endl;
				inFile << "\nDESCRIPTION:  " << myPets[x].description << endl;
				inFile << "\nAGE: " << myPets[x].age << endl;
				if(myPets[x].dangerous == 0)
					inFile << "\nDANGEROUS: no\n";
				else
					inFile << "\nDANGEROUS: yes\n";
				inFile << horizontalLine << endl;
			}
		
			cout << "Pet data has been printed to " << fileName;

			inFile.close();
			
			break;
		}
	}
	
	cout << endl << endl;
		
}
	


float convertToFloat(string s)
{
    istringstream i(s);
    float x;
    if (!(i >> x))
        x = 0;
    return x;
} 