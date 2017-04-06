#ifndef _odd_h
#define _odd_h
#include "odd.h"


//***************************************************************************
//                          enterinventory
//
// task:		  This procedure reads the information into an array.
// datain:		  This function receives an array of inventory type and its size.
// data returned: number of new array
//
//****************************************************************************

int menu()
{
	int choice;
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
     	return choice;
}

int add(Inventory inventory[], int num)
{
   	int choice;
   	ifstream inFile;
   	char fileName[26], danger, anotherFile;
	string numberReadFromFile; //use this when reading a number from the file
	string tempString;
	
	
   if(num < 100)
   {
		cout << "\nWhat do you want to do?" << endl;
		cout << "\t1. Add items from a file?" << endl; 
   		cout << "\t2. Add one item manually?" << endl;
   		cout << "\t3. Return to main menu?"<< endl;
   		cout << "\tChoose 1-3."<<endl;
   		cout << "Choice: ";
   		cin >> choice;
   		cout << endl;
   
   		// validate choice
   		while(choice<1 || choice>3)
      	{
      		cout << "You did not enter a valid choice." << endl; 
         	cout << "Please enter 1-3." << endl;
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
				getline(inFile, tempString, '#');  //read the first inventory name from the file
		
				while(!inFile.eof()) //while we are not at the end of file
				{
					inventory[num].name = tempString; //put the name of the inventory inside the array inventory member
					getline(inFile, inventory[num].description, '#');  //read description from file
			
					getline(inFile, numberReadFromFile, '#'); //read in the inventory age from the file
					inventory[num].goodsPrice = stringToFloat(numberReadFromFile); //convert the string to a float and then place in structure array
			
					getline(inFile, numberReadFromFile, '#'); //read in the inventory age from the file
					inventory[num].salePrice = stringToFloat(numberReadFromFile);
                    
                    getline(inFile, numberReadFromFile, '#');
                    inventory[num].months = stringToFloat(numberReadFromFile);
					
					getline(inFile, numberReadFromFile, '#');
					inventory[num].Date = stringToFloat(numberReadFromFile);
					
					num++; //move on to the next array element to start entering next inventory info
			
					getline(inFile, tempString, '#');  //read the next inventory name from the file	
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
				getline(cin, inventory[num].name);
			
				cout << endl;
				cout << "Description: ";
				getline(cin, inventory[num].description);
			
				cout << endl;
				cout << "RETAIL PRICE OF GOODS(what the store paid for it): ";
				cin >> inventory[num].goodsPrice;
			
				cout << endl; 
				cout << "SALE PRICE (what the store selling it for): ";
				cin >> inventory[num].salePrice;
                
                cout << endl;
                cout << "ENTER THE POPULARITY OF THE ITEM FOR EACH MONTH." <<endl;
                cout << "1= unpopular and 10 = extremely popular" <<endl;
                for(int i=1;i<13;i++)
                {
                    cout<<"MONTH "<<i <<": ";
                    cin>>inventory[num].months;
                }
                
                cout << endl << endl;
				cout << "AQUIRE DATE (example: 04 02 16)"<< endl;
				cin >> inventory[num].Date;

				num++;
				cout << "The " << inventory[num].name << " has been added.\n";
				
				
			}
   
   		}
   		else if(choice == 3)
   		{
        cout << "Exiting program." << endl;
        system ("pause");
 		return 0;
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

void printItems(Inventory inventory[], int num)
{
	int choice;
	char fileName[26];
	fstream inFile;
	
	cout << "\nWhat would you like to do? " << endl;
	cout << "\t1. Print creatures to the screen." << endl;
	cout << "\t2. Print creatures to a file." << endl;
	cout << "\tChoose 1 or 2.";
	cout << "CHOICE: ";
	cin >> choice;
	cout << setprecision(2) << fixed;

	while(choice<1 || choice>2)
      	{
      		cout << "You did not enter a valid choice." << endl; 
         	cout << "Please enter 1 or 2." << endl;
         	cin >> choice;
         }
	
	if(choice==1)
	{
		for(int x=0; x<num; x++)
		{	
			cout << "ALL ITEMS:" <<endl;
			cout << "\n\n-------------------------------------------------------------";
			cout << "\n                                                   ITEM " << x+1 << ": " << endl;
			cout << "Name: " << right << setw(15) << inventory[x].name << endl;
			cout << "\nDESCRIPTION:\n";
			cout << inventory[x].description << endl << endl;
			cout << left << setw(20) << "Length: " << left << setw(5) << inventory[x].goodsPrice << " feet" << endl;
			cout << left << setw(20) << "Height: " << left << setw(5) << inventory[x].salePrice << " feet" << endl;
            cout << left << setw(20) << "month:: " << left << setw(5) << inventory[x].months << endl;
			cout << left << setw(20) << "AQUIRE DATE: " << left << setw(5) << inventory[num].Date << endl;
			

		}
	}
	
	else if (choice==2)
	{
		cin.ignore();
		cout << "What is the name of your file you wish to write to?" << endl;
		cout << "FILENAME: ";
		cin.getline(fileName, 50);
		cout << endl << endl;
		
		inFile.open(fileName, ios::out);
		
		for(int x=0; x<num; x++)
		{
			inFile << "ALL ITEMS:" <<endl;
			inFile << "\n\n-------------------------------------------------------------";
			inFile << "\n                                                   ITEM " << x+1 << ": " << endl;
			inFile << "Name: " << right << setw(15) << inventory[x].name << endl;
			inFile << "\nDESCRIPTION:\n";
			inFile << inventory[x].description << endl << endl;
			inFile << left << setw(20) << "Length: " << left << setw(5) << inventory[x].goodsPrice << " feet" << endl;
			inFile << left << setw(20) << "Height: " << left << setw(5) << inventory[x].salePrice << " feet" << endl;
            inFile << left << setw(20) << "month:: " << left << setw(5) << inventory[x].months << endl;
			inFile << left << setw(20) << "AQUIRE DATE: " << left << setw(5) << inventory[num].Date << endl;

            
			

		}
		
		cout << "\nYour inventories have been entered into " << fileName;
		
		inFile.close();
	}
	cout << endl << endl;
}

//***************************************************************************
//                          printStatistics
//
// task:		  This procedure prints the statistics.
// datain:		  This function receives an array of Creatures type and its size.
// data returned: none.
//
//****************************************************************************


//***************************************************************************
//                          saveCreaturesToFile
//
// task:		  This procedure save the informations.
// datain:		  This function receives an array of Creatures type and its size.
// data returned: none.
//
//****************************************************************************

void saveInventory(Inventory inventory[], int num)
{
	ofstream outFile;
	char filename[25];
	
	cout << "What is the name of the file you want to save your inventories to?\n";
	cout << "FILENAME:  ";
	cin >> filename;
	
	outFile.open(filename);
	
	//each member printed out is seperated by a pound sign
	for(int x = 0; x < num; x++)
	{
		outFile << inventory[x].name << "#";
		outFile << inventory[x].description << "#";
		outFile << inventory[x].goodsPrice << "#";
		outFile << inventory[x].salePrice << "#";
        outFile << inventory[x].months << "#";
		outFile << inventory[x].Date << "#";
	}
	cout << "\nYour creatures were successfully saved to the " << filename << " file.\n";
}
/*
	Function:	stringToFloat()
	Purpose:	Send a string to this function and the function will convert
			    the string to a float.

*/	

float stringToFloat(string str)
{
	float number;
	char convertStr[1000];
	strcpy(convertStr, str.c_str());//convert the string to c-string
	number = atof(convertStr);
	return number;
}