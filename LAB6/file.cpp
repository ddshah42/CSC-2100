#include <fstream>
#include <iostream>

using namespace std;
int main ()
{
	int a[10];
	int i=0,j=1;
    char choice;

    do

    {
        // open a file in write mode.
        ofstream outfile;
        outfile.open("output.txt");
        
        cout<<"\n Getting ready to write numbers through 1 to 10 in output.txt... "<<endl;
        cout<<"\n The numbers 1 through 10 have been successfully written to output.txt. "<<endl;
        
        for(i=0;i<=9;i++)
        {
            a[i]=i+1;

        }
        for(i=0;i<10;i++)
        outfile << a[i] <<"\n"<< endl;
        
        cout<<"\n Do u want to run the program again? (y/n)"<<endl;
        cin>>choice;

        outfile.close();
    }while(choice=='y'|| choice=='Y');

	return 0;

}