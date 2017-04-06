#include <iostream>
#include <iomanip>
using namespace std;

int main( )
{
    cout << "HELLO RACHEL RAY!\n";
    cout << "Enter the number of cups you wish to convert!\n";
    double cups;
    double fluid;
    double gallons;
    double liters;
    double milliliters;
    double pints;
    double quarts;
    double tablespoons;
    double teaspoons;
    
    cout << setprecision(3)<< fixed;
    cout << "CUPS: " ;
    cin >> cups;
    cout << "\n";
    
    cout << "\t CUPS " << setw(27) <<   "\t CONVERTS TO\n";
    cout << "---------------------------------------------------- " <<endl;
    
    fluid= 8*cups;
    cout << "\t" << cups << "\t \t      " << fluid << "  FLUID OUNCES" <<endl;
    
    gallons= 0.0625*cups;
    cout << "\t" << cups << "\t \t \t" << gallons  << "  GALLONS" <<endl;
    
    liters= 0.236588*cups;
    cout << "\t" << cups << "\t \t \t" << liters << "  LITERS" <<endl;
    
    milliliters= 236.588*cups;
    cout << "\t" << cups << "\t \t     " << milliliters << "  MILLILITERS" <<endl;
    
    pints= 0.5*cups;
    cout << "\t" << cups << "\t \t \t" << pints << "  PINTS" <<endl;
    
    quarts= 0.25*cups;
    cout << "\t" << cups << "\t \t \t" << quarts << "  QUARTS" <<endl;
    
    tablespoons= 16*cups;
    cout << "\t" << cups << "\t \t      " << tablespoons << "  TABLESPOONS" <<endl;
    
    teaspoons= 48*cups;
    cout << "\t" << cups << "\t \t      " << teaspoons << "  TEASPOONS" <<endl;
    
    cout << "----------------------------------------------------\n\n";
    
    cout << "HAPPY COOKING!" <<endl;
    
    
    return 0;
}

