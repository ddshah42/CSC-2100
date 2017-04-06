/*
	Title:  creatures.cpp
	Author: SHAH DHAIRYA
	Date:	04.27.2016
	Purpose:This program store informations of magical creatures to a file and also prints the information from the file.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

// declares the structure Cost.
struct Cost
{
   float numHours;
   float costPerHour;
   float foodCost;
   float supplyCost;
};

// declares the structure Creatures.
struct Creatures
{
   string name;
   string description;
   float avgLength;
   float avgHeight;
   string location;
   bool dangerous;
   Cost cost;
};

// Function prototypes

int enterCreatures(Creatures[], int);
void printCreatures(Creatures[], int);
void printStatistics(int, Creatures*);
void saveCreaturesToFile(Creatures[], int);
float stringToFloat(string);

int main()
{
	//GLOBAL CONSTANT VARIABLES
	const int SIZE = 100;
   Creatures creatures[100];
   int numofcreatures=0;
   bool goAgain = true; 
   int choice;
   
   cout << "\nWelcome to the Magical Creature Zoo Management Program!\n\n";
   
   
   
   while (goAgain == true)
   {
     	cout << "What would you like to do?" << endl; 
    	cout << "\t1. Enter some Magical Creatures." << endl; 
     	cout << "\t2. Print Creatures." << endl; 
     	cout << "\t3. Print Statistics on Creature Cost." << endl; 
     	cout << "\t4. End Program." << endl; 
     	cout << "\nCHOOSE 1-4: ";
     	cout << "Choice: ";
      	cin >> choice;
      	
      	// validate choice
      	while(choice<1 || choice>4)
      	{
      		cout << "You did not enter a valid choice." << endl; 
         	cout << "Please enter 1,2,3 or 4." << endl << endl;
         	cin >> choice;
      	}
     	cout << endl;
      
		switch(choice)
		{
      		case 1:
      		{
         		numofcreatures = enterCreatures(creatures, numofcreatures);
         		break;
      		}
      		case 2:
      		{
         		printCreatures(creatures, numofcreatures);
         		break;
      		}
      
			case 3:
      		{
         		printStatistics(numofcreatures, creatures);
         		break;
      		}
      
			case 4:
      		{
         		saveCreaturesToFile(creatures, numofcreatures);
         		cout << "\n\nGOODBYE!" << endl << endl;
         		goAgain = false; 
         		break;
      		}   
      	}
   }


return 0;

}

//***************************************************************************
//                          enterCreatures
//
// task:		  This procedure reads the information into an array.
// datain:		  This function receives an array of Creatures type and its size.
// data returned: number of new array
//
//****************************************************************************


int enterCreatures(Creatures creature[], int num)
{
   	int choice;
   	ifstream inFile;
   	char fileName[100], danger, anotherFile;
	string numberReadFromFile; //use this when reading a number from the file
	string tempString;
	
	
   if(num < 100)
   {
		cout << "\nWhat do you want to do?" << endl;
		cout << "\t1. Load my creatures from a file." << endl; 
   		cout << "\t2. Enter one creature manually." << endl;
   		cout << "\tChoose 1 or 2."<<endl;
   		cout << "Choice: ";
   		cin >> choice;
   		cout << endl;
   
   		// validate choice
   		while(choice<1 || choice>2)
      	{
      		cout << "You did not enter a valid choice." << endl; 
         	cout << "Please enter 1 or 2." << endl;
         	cin >> choice;
      	}
   
   		if (choice == 1)
   		{
   			
      		cin.ignore();
      		cout << "What is the name of the file with your list of creatures? (ex: filename.txt)" << endl; 
      		cout << "File name: "; 
      		cin.getline(fileName, 50);
      		cout << endl << endl;
      
      		inFile.open(fileName);
			if(inFile)
			{
				getline(inFile, tempString, '#');  //read the first creature name from the file
		
				while(!inFile.eof()) //while we are not at the end of file
				{
					creature[num].name = tempString; //put the name of the creature inside the array creatureName member
					getline(inFile, creature[num].description, '#');  //read description from file
			
					getline(inFile, numberReadFromFile, '#'); //read in the creatures age from the file
					creature[num].avgLength = stringToFloat(numberReadFromFile); //convert the string to a float and then place in structure array
			
					getline(inFile, numberReadFromFile, '#'); //read in the creatures age from the file
					creature[num].avgHeight = stringToFloat(numberReadFromFile);
					
					// getline(inFile, numberReadFromFile, '#'); //read in the creatures age from the file
					getline(inFile, creature[num].location, '#');
					
					getline(inFile, numberReadFromFile, '#'); //read in whether the creature is dangerous or not (1 means yes, 0 means no)
					creature[num].dangerous = stringToFloat(numberReadFromFile); //convert the string to a float and then place in structure array
					
					getline(inFile, numberReadFromFile, '#');
					creature[num].cost.numHours = stringToFloat(numberReadFromFile);
					
					getline(inFile, numberReadFromFile, '#');
					creature[num].cost.costPerHour = stringToFloat(numberReadFromFile);
					
					getline(inFile, numberReadFromFile, '#');
					creature[num].cost.foodCost = stringToFloat(numberReadFromFile);
					
					getline(inFile, numberReadFromFile, '#');
					creature[num].cost.supplyCost = stringToFloat(numberReadFromFile);
					
					num++; //move on to the next array element to start entering next creature info
			
					getline(inFile, tempString, '#');  //read the next creature name from the file	
				}
				
				cout << "All creatures from " << fileName << " have been added to the program." << endl << endl;
				inFile.close();
			}
			else cout << "File could not be opened.\n\n";
		}

   		else if (choice == 2)
   		{
   			bool addAnother = true;
   
   			while (addAnother == true)
   			{
   
		
				cout << endl << endl;
				cin.ignore();
				cout << "Name: ";
				getline(cin, creature[num].name);
			
				cout << endl;
				cout << "Description: ";
				getline(cin, creature[num].description);
			
				cout << endl;
				cout << "AVERAGE LENGTH (in feet): ";
				cin >> creature[num].avgLength;
			
				cout << endl; 
				cout << "AVERAGE HEIGHT (in feet): ";
				cin >> creature[num].avgHeight;
			
				cout << endl; 
				cout << "LOCATION: ";
				cin.ignore();
				getline(cin, creature[num].location);
			
				cout << endl; 
				cout << "IS IT A DANGEROUS CREATURE? (y or n): ";
				cin >> danger;
				if (tolower(danger) == 'y')
					creature[num].dangerous = 1;
				else 
					creature[num].dangerous = 0;
				
				cout << endl; 
				cout << "How many hours do you spend caring for the " << creature[num].name << " ?" << endl;
				cout << "NUMBER OF HOURS: ";
				cin >> creature[num].cost.numHours;
			
				cout << endl;
				cout << "What is the cost per hour for caring for the " << creature[num].name << " ?" << endl;
				cout << "COST PER HOUR: ";
				cin >> creature[num].cost.costPerHour;
			
				cout << endl << endl;
				cout << "How much money do you spend on food for the " << creature[num].name << " ?" << endl;
				cout << "FOOD COST: ";
				cin >> creature[num].cost.foodCost;
			
				cout << endl << endl;
				cout << "How much money do you spend on grooming and medical supplies for the " << creature[num].name << " ?" << endl;
				cout << "SUPPLY COST: ";
				cin >> creature[num].cost.supplyCost;

				cout << "\nThe " << creature[num].name << " has been added.\n";

				num++;
				// ask for another entry
				cout << "\nDo you want to add another file? (y or n): ";
				cin >> anotherFile;
			
				if (toupper(anotherFile) == 'N')
					addAnother = false;
				
			}
   
   		}
   		else 
   		{
   			cout << "The zoo is at full capacity.\n";
   			cout << "You are not able to add creatures.\n";
   		}
      
	
	}
	return num; 
}

//***************************************************************************
//                          printCreatures
//
// task:		  This procedure prints the information.
// datain:		  This function receives an array of Creatures type and its size.
// data returned: none.
//
//****************************************************************************

void printCreatures(Creatures creature[], int num)
{
	int choice;
	char fileName[26];
	fstream inFile;
		
		for(int x=0; x<num; x++)
		{
			cout << "\n\n-------------------------------------------------------------";
			cout << "\nCreature " << x+1 << ": " << endl;
			cout << "Name: " << right << setw(15) << creature[x].name << endl;
			cout << "\nDESCRIPTION:\n";
			cout << creature[x].description << endl << endl;
			cout << left << setw(20) << "Length: " << left << setw(5) << creature[x].avgLength << " feet" << endl;
			cout << left << setw(20) << "Height: " << left << setw(5) << creature[x].avgHeight << " feet" << endl;
			cout << left << setw(20) << "Location: " << left << setw(5) << creature[x].location << endl;
			if(creature[num].dangerous==1)
				cout << left << setw(20) << "Dangerous? " << left << setw(5) << "Yes" << endl;
			else
				cout << left << setw(20) << "Dangerous? " << left << setw(5) << "No" << endl;
				
				
			cout << setw(50) << left << "Number of Hours to care for Creatures: ";
			cout << "$ " << creature[x].cost.numHours << endl;
			
			cout << setw(50) << left << "Cost Per Hour of Taking Care of Creature: ";
			cout << "$ " << creature[x].cost.costPerHour << endl;
			
			cout << setw(50) << left << "Cost to Feed Creature: ";
			cout << "$ " << creature[x].cost.foodCost << endl;
			
			cout << setw(50) << left << "Grooming & Supplies Cost: ";
			cout << "$ " << creature[x].cost.supplyCost << endl;

			cout <<"\n\n";

		}
}		
	
	
	

//***************************************************************************
//                          printStatistics
//
// task:		  This procedure prints the statistics.
// datain:		  This function receives an array of Creatures type and its size.
// data returned: none.
//
//****************************************************************************
//The printStatistics function prints out each creature and the cost associated with 
//the creature for one week.  The formula used to calculate the cost is:
// numHours * costPerHour + food + supplies.
void printStatistics(int num, Creatures* creature)
{
	float totalCost = 0;
	float cost;
	cout << "COST OF EACH CREATURE FOR ONE WEEK:\n\n";
	
	//print out headers
	cout << left << setw(15) << "CREATURE" << setw(5) << " " << right << setw(15) << "COST" << endl;
	
	cout << setprecision(2) << fixed << showpoint;
	
	for(int x= 0; x < num; x++)
	{
		cost = creature[x].cost.numHours*creature[x].cost.costPerHour+creature[x].cost.foodCost+creature[x].cost.supplyCost;
		cout << left << setw(15) << creature[x].name << setw(5) << right << " $" << setw(15) << cost << endl;
		totalCost += cost;
		
	}
	cout << "\n" << left << setw(15) << "TOTAL COST:" << setw(5) << right << " $" << setw(15) << totalCost <<endl;
	cout << "\n";

}


//***************************************************************************
//                          saveCreaturesToFile
//
// task:		  This procedure save the informations.
// datain:		  This function receives an array of Creatures type and its size.
// data returned: none.
//
//****************************************************************************

void saveCreaturesToFile(Creatures creature[], int num)
{
	ofstream outFile;
	char filename[25];
	
	cout << "What is the name of the file you want to save your creatures to?\n";
	cout << "FILENAME:  ";
	cin >> filename;
	
	outFile.open(filename);
	
	//each member printed out is seperated by a pound sign
	for(int x = 0; x < num; x++)
	{
		outFile << creature[x].name << "#";
		outFile << creature[x].description << "#";
		outFile << creature[x].avgLength << "#";
		outFile << creature[x].avgHeight << "#";
		outFile << creature[x].location << "#";
		outFile << creature[x].dangerous << "#";
		outFile << creature[x].cost.numHours << "#";
		outFile << creature[x].cost.costPerHour << "#";
		outFile << creature[x].cost.foodCost << "#";
		outFile << creature[x].cost.supplyCost << "#";
	}
	cout << "\nYour creatures were successfully saved to the " << filename << " file.\n";
}

float stringToFloat(string str)
{
	float number;
	char convertStr[1000];
	strcpy(convertStr, str.c_str()); //convert the string to c-string
	
	number = atof(convertStr);
	
	return number;
}