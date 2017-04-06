/*
	Title:  prog3.cpp
	Author: Dhairya Shah
	Date:	03/22/2016
	Purpose:
 This program helps the user to know total profits, average profit per month, the most profitable month, the least profitable month, and also the quarterly profits.
 */
#include <iostream>
#include <iomanip>
using namespace std;

	double profit[12]; // Array to hold profit
	string monthsName[]={"January","February","March","April","May","June","July","August","September","October","November","December"};//list
	double quarterlyProfit[4];
	double maxprofit=0.00;
    double total_profit;



//profit function
int getprofit()
{
       for (int index = 0; index < 12; index++)// prints months from 1 to 12
    {
        
        do
        {
            cout <<"\nEnter the profit for month" << (index+1) << " : $";
            cin >> profit[index];
        

        }
        while(profit[index]<=0);// if user enters number less than zero
        
        
    }
    
    
return 0;
}
//total function
double getTotal()
{
    double total_profit = 0.00;
    for(int i=0; i<12;i++)
    {
		total_profit += profit[i];
    }
    
    return total_profit;
    
}
//function for minimum number
int getmin()
{
    double minprofit,smallest_month=0.00;
    minprofit=maxprofit;
	for(int i=0;i<12;i++)
	{
		if(minprofit>profit[i])
		{
			minprofit=profit[i];
			smallest_month=i+1;
		}
	}
	return smallest_month;
}
//function for maximum number
int getmax()
{
	double maxprofit1=0.00;
	double largest_month=0.00;
	for(int i=0;i<12;i++)
	{
		if(maxprofit1<profit[i])
		{
			maxprofit1=profit[i];
			largest_month=i+1;
		}
	}
return largest_month;

}
//function to get quaterly profits
int getquarterly()
{
    quarterlyProfit[0]=0;
    quarterlyProfit[1]=0;
    quarterlyProfit[2]=0;
    quarterlyProfit[3]=0;        
   	for(int i=0;i<3;i++)
    {
		quarterlyProfit[0]=quarterlyProfit[0] + profit[i];
		quarterlyProfit[1]=quarterlyProfit[1] + profit[i+3];
		quarterlyProfit[2]=quarterlyProfit[2] + profit[i+6];
		quarterlyProfit[3]=quarterlyProfit[3] + profit[i+9];
    }
    return 0;
}
//main function
int main()
{
    
    cout << setprecision(2)<< fixed;//fixed for 2 decimals
	
	double total_profit=0.00,yearly_avg=0.00,minprofit=0.00,maxprofit1=0.00;
	int largest_month=0,smallest_month=0;
	double quaterly_profit1=0.00,quaterly_profit2=0.00,quaterly_profit3=0.00,quaterly_profit4=0.00;
	char c;
	cout << "Welcome to Flourish and Blotts Bookstore!\n";
    do
    {
		/* code */	
        getprofit();
        for(int i=0;i<12;i++)
        {
            if(maxprofit<profit[i])
            {
                maxprofit=profit[i];
            }
        }
        cout<<endl;
        int maxPro;
        maxPro = maxprofit;
        cout<< "Max Profit "<< maxPro <<endl;

        cout << "----------------------------------------------------------\n";
        cout << "----------------------------------------------------------\n";
        cout << endl;
        
        total_profit = getTotal();//total profit
		
        cout <<"    "<<" TOTAL PROFIT FOR YEAR:   $ "<<total_profit<<endl;
    
        yearly_avg = total_profit/12.00;// to find yearly average
	
        cout<<"    "<<" YEARLY AVERAGE PROFIT:   $ "<<yearly_avg<<endl;
	
        largest_month=getmax();// largest month

        cout<< " "<<"MONTH WITH LARGEST PROFIT:    "<<monthsName[largest_month-1]<<" totalling $"<<profit[largest_month-1]<<endl;
    
        smallest_month=getmin();// smallest month

        cout<< ""<<"MONTH WITH SMALLEST PROFIT:    "<<monthsName[smallest_month-1]<<" totalling $"<<profit[smallest_month-1]<<endl;
    
        getquarterly();
        cout << "----------------------------------------------------------\n\n";

        cout<<"                 QUARTERLY PROFITS" <<endl;
		cout<<"     January - March      $  "<<quarterlyProfit[0]<<endl;
		cout<<"     April - June         $  "<<quarterlyProfit[1]<<endl;
		cout<<"     July - September     $  "<<quarterlyProfit[2]<<endl;
		cout<<"     October - December   $  "<<quarterlyProfit[3]<<endl;
    
        cout << "----------------------------------------------------------\n";
        cout << "----------------------------------------------------------\n";
        cout<<"would you like to run the program again (Y/N) : ";
        cin>>c;
        
    }while(c=='Y' || c=='y');// asks the user to run program again
    
    return 0;
}
