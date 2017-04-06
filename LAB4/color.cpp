#include <iostream>
using namespace std;

int main(){
	string colors;
	cout<< "Enter two primary colors to mix: " <<endl;
	getline(std::cin,colors);
    
	if (colors.compare("red blue") == 0 || colors.compare("blue red") == 0 ){
		cout<<"The name of the secondary color after mixing is purple" <<endl;
	} else if(colors.compare("red yellow") == 0 || colors.compare("yellow red") == 0 ){
		cout <<"The name of the secondary color after mixing orange" <<endl;
	} else if(colors.compare("blue yellow") == 0 || colors.compare("yellow blue") == 0 ){
		cout << "The name of the secondary color after mixing green " <<endl;
	}else{
		cout << "Invalid Primary Color. The primary colors are only RED, BLUE, and YELLOW."<<endl;
	}
    
    return 0;
}

