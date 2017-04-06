#ifndef _odd_h
#define _odd_h
#include "odd.h"
int main()
{
	//GLOBAL CONSTANT VARIABLES
	const int SIZE = 100;
   Inventory inventory[100];
   int numofInventory=0;
   bool goAgain = true; 
   int choice;
   
   cout << "\nWELCOME TO OBSCURA ANTIQUES & ODDITIES!\n\n";
   
   
   
   while (goAgain == true)
   {
     	choice=menu();
      
		switch(choice)
		{
      		case 1:
      		{
         		numofInventory = add(inventory, numofInventory);
         		break;
      		}
      		case 2:
      		{
         		printItems(inventory, numofInventory);
         		break;
      		}
      
			//case 3:
      		//{
         		//printPopular(inventory, numofInventory);
         		//break;
      		//}
      
			case 4:
      		{
         		saveInventory(inventory, numofInventory);
         		cout << "\n\nGOODBYE!" << endl << endl;
         		goAgain = false; 
         		break;
      		}   
      	}
   }


return 0;

}