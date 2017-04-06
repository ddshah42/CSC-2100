#include <iostream>
#include <iomanip>

using namespace std;

const int  MAXROWS = 50;

void getTemperature(float[MAXROWS], int&, int&);

float findAverage(float [], int);
float findHighest(float [], int);
float findLowest(float [], int);

int main()
{
	int numOfTemp;
	float avgOfTemp;
	float highestTemp;
	float lowestTemp;
	
	cout << "Please input the number of temperatures to be read: ";
	cin >> numOfTemp;
	
	for (int i = 0; i < numOfTemp; i++)
	{
		cout << "Input temperature " << (i + 1) << ": ";
		cin >> getTemperature[i];
	}
	
	return 0;
	
}