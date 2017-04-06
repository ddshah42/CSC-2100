#include<iostream>
#include <iomanip>

using namespace std;

string type[]={"mild", "medium", "sweet","hot","zesty"};
int sales[5];
int maxvalue=0;
int getTotal()
{
    int total=0;
    for(int i=0;i<5;i++)
    total=total+sales[i];
    return total;
}
int posOfLargest()
{
    int pos=0;
    for(int i=0;i<5;i++)
    {
     if(maxvalue<sales[i])
     {
      maxvalue=sales[i];
      pos=i;
     }
    }
    return pos;
}
  
int posOfSmallest()
{
    int minvalue=maxvalue;
    int pos=0;
    for(int i=0;i<5;i++)
    {
     if(minvalue>sales[i])
     {
      minvalue=sales[i];
      pos=i;
     } 
    }
    return pos;
}  
int main()
{
    cout << "\nPEPPER PALACE!!\n";
    
    cout << "\nPlease tell me the number of jars sold for each type of salsa.\n";

    for(int i=0;i<5;i++)
    {
        cout<<"\nJars sold last month of "<<type[i]<<" : ";
        cin>>sales[i];           
    }
    
    cout << " SALSA SALES REPORT\n";
    cout << "NAME               JARS SOLD\n";
    cout << "-------------------------------\n";
    for(int i=0;i<5;i++)
    {
        cout<<type[i]<<setw(7)<< "                       "<<sales[i]<<endl;
    }
    cout<<"\nTotal sales : "<<getTotal()<<endl;
    cout<<"Higher Seller : "<<type[posOfLargest()]<<endl;
    cout<<"Low Seller : "<<type[posOfSmallest()]<<endl;
    return 0;
}

