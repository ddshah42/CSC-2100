/*
	Title:  	isprime.cpp
	Author:  	Dhairya Shah
	Date: 		16 march, 2016
	Purpose:  	Displayes prime numbers between 1 to 100
 */
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]) 
{
 
    cout << "\nGetting ready to print prime numbers between 1 and 100(inclusive) to a file.\n";
    cout << "\nPrime numbers written to PrimeList.txt.\n";
    cout << "\n";
    
 FILE *fp;
 fp=fopen("PrimeList.txt","w");
 int i,j=2,cnt=0;
 char c;

 for(i=2;i<100;i++)
 {
  cnt=0;
   for(j=2;j<i;j++)
   {
     if(i%j==0)
     {
       cnt++;		
       break;
     }
   }
   if(cnt==0)
   {
	  fprintf(fp, "%d", i);
	 fputc('\n',fp);
   }	

 }
    return 0;
}