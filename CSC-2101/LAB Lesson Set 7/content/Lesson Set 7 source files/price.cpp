/*
	Title:  price.cpp
	Author:
	Date:
	Purpose:	This program will read in prices and store them into a two-dimensional array.
				It will print those prices in a table form.
				It will also determine and print the highest and lowest price in the array.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const int  MAXROWS = 10;
const int  MAXCOLS = 10;

void getPrices(float[][MAXCOLS], int&, int&);      // gets the prices into the array
void printPrices(float[][MAXCOLS], int, int);      // prints data as a table

//ADD THE PROTOTYPE OF THE FUNCTION THAT WILL FIND THE HIGHEST PRICE IN THE ARRAY (findHighestPrice)

//ADD THE PROTOTYPE OF THE FUNCTION THAT WILL FIND THE LOWEST PRICE IN THE ARRAY (findLowestPrice)


int main()
{
	int rowsUsed;                               // holds the number of rows used
	int colsUsed;                               // holds the number of columns used
	float priceTable[MAXROWS][MAXCOLS];			// a 2D array holding the prices

	// calls getPrices to fill the array
	getPrices(priceTable, rowsUsed, colsUsed); 
	
	// calls printPrices to display array
	printPrices(priceTable, rowsUsed, colsUsed);
	
	//WRITE THE STATEMENTS BELOW THAT WILL PRINT THE HIGHEST & LOWEST PRICES FROM priceTable
	//BY CALLING findHighestPrice & findLowestPrice
	
	// prints highest price which it receives from calling the function findHighestPrice
	
									
	// prints lowest price which it receives from calling the function findLowestPrice
	

	return 0;
}

//****************************************************************************************
//
//                          getPrices
//
//  task:    This procedure asks the ser to input the numer of rows and
//           columns used.  It then asks the user to input (rows * columns)
//           number of prices where x = rows * columns.  The data is placed in the array.
//  datain:  an empty array of float
//  dataout: an array filled with numbers and the number of rows
//           and columns used.
//
//****************************************************************************************
void getPrices(float table[][MAXCOLS], int& numOfRows, int& numOfCols)
{
	cout << "Please input the number of rows from 1 to "<< MAXROWS << endl;
	cin >> numOfRows;

	cout << "Please input the number of columns from 1 to "<< MAXCOLS << endl;
	cin >> numOfCols;

	for (int row = 0;  row < numOfRows;  row++)
	{
		for (int col = 0; col < numOfCols;  col++)
		{
			//FILL IN THE CODE TO READ AND STORE THE NEXT VALUE IN THE ARRAY
		}
	}
}

//***************************************************************************
//
//                          printPrices
//
//  task:    This procedure prints the table of prices
//  datain:  an array of floating point numbers and the number of rows
//           and columns used.
//  dataout: none
//
//****************************************************************************
void printPrices(float table[][MAXCOLS], int numOfRows, int numOfCols)
{
	cout << fixed << showpoint << setprecision(2);

	for (int row = 0;  row < numOfRows; row++)
	{
		for (int col = 0;  col < numOfCols; col++)
			//FILL IN THE CODE TO PRINT THE TABLE
	}
}

//***************************************************************************
//
//                               findHighestPrice
//
//  task:         This function finds the highest value in a 2D array
//  datain:       an array of floating point numbers and the number of rows
//                and columns used.
//  datareturned: the highest value in the array (highest price)
//
//****************************************************************************
float findHighestPrice(float table[][MAXCOLS], int numOfRows, int numOfCols)
{
	float highestPrice;

	highestPrice = table[0][0];   // make first element the highest price

	for (int row = 0;  row < numOfRows;  row++)
		for (int col = 0;  col < numOfCols;  col++)
			if (highestPrice < table[row][col])
				highestPrice=table[row][col];

	return highestPrice;
}

//***************************************************************************
//
//                               findLowestPrice
//
//  task:         This function finds the lowest value in a 2D array
//  datain:       an array of floating point numbers and the number of rows
//                and columns used.
//  datareturned: the lowest value in the array (lowest price)
//
//****************************************************************************

//WRITE THE CODE FOR THE findLowestPrice FUNCTION DEFINITION