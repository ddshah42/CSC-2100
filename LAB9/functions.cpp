/*
	Title: functions.cpp
	Author: Dhairya Shah
	Date:	03/30/2016
	Purpose: functions are declared
 */

#include "netflix.h"
// array function
int* makeArray(int n)
{
	int *arr;
	arr = new int[n];
	return arr;
}
// student function
void getStudentData(int* arr, int n)

{

    
    cout << "Enter the number of hours each student spent watching Netflix.\n";
    for(int x=0; x < n; x++)
	{
        do {
    
            cout << "Student " << x+1 <<": ";
            
            cin >> arr[x];
            
        }while(arr[x] < 0);
        
    }

}

// print function
void printArray(int* arr, int n){
    for(int x=0; x < n; x++)
    {
        cout << arr[x] << " " ;
    }
}
//average function
void getAverage(int*arr, int n){
    
    double total =0.00;
    for(int x=0; x < n; x++)
    {
        total += arr[x];
    }
    
    total = total/n;
    cout <<"                       Average :" << total;

    }
//median function
void getMedian(int * x, int n)
{
    
    int count;
    float median;
    if ((n % 2) !=0)
    {
        count = ((n-1)/2);
        median = * (x+count);
        cout <<"                       Median:"<< median <<endl;
        cout << "------------------------------------------------------------\n";
        cout << "------------------------------------------------------------\n";
        
        
    }
    else{
        count = n/2;
        cout<<*(x+count-1)<<endl;
        float a=*(x+count);
        float b=*(x+count-1);
        cout<<b<<endl;
        median = (a+b)/2;
        cout <<"                       Median:" << median <<endl;
        cout << "------------------------------------------------------------\n";
        cout << "------------------------------------------------------------\n";
        
    }
}

//sort function
void selectionSort(int *array, int size)
{
    int startScan, minIndex, minValue;
    
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = *(array+startScan);
        for(int index = startScan + 1; index < size; index++)
        {
            if (*(array+index) < minValue)
            {
                minValue = *(array+index);
                minIndex = index;
            }
        }
        *(array+minIndex) = *(array+startScan);
        *(array+startScan) = minValue;
    }
}

