/*
	Title:  creatures.cpp
	Author: SHAH DHAIRYA
	Date:	04.14.2016
	Purpose:This program store informations of magical creatures to a file and also prints the information from the file.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;


// declares the structure.
struct Item
{
   string name;
   string description;

   struct Cost
   {
      float goodsPrice;
      float salePrice;
      float profit;/* data */
   };

   int popularity[12];

   struct Date
   {
      int month;
      int day;
      int year;/* data */
   };
   
};

// Function prototypes
int menu();
int add(Inventory[], int);
void printItems(Inventory[], int);
//void printPopular(Inventory[], int);
void saveInventory(Inventory[], int);
float stringToFloat(string);