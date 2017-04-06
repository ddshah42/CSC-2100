#include <iostream>

const int SIZE = 80;

void show_frequent_character(char *, int);

int main()
{
    using namespace std;
    char sequence[SIZE];
    cout <<"\nEnter a string: ";
    cin.getline(sequence, SIZE);
    cout <<"\n";
    cout <<"STRING ENTERED: "<<sequence <<endl;
    show_frequent_character(sequence, SIZE);
    cout <<"\n";

    return 0;
}
 

void show_frequent_character(char * characters, int length)
{

    using namespace std;

    char ch;

    int i = 0;
    int max = 0;
    int anothermax = 0;

    int j, counter;

    while(characters[i] != '\0')
        i++;

    const char * begin;
    const char * end = characters + i;

    for(begin = characters; begin != end; begin++)
    {
        j = 0;
        counter = 0;

        while(characters[j])
        {
            if( *begin == characters[j])
                counter++;
            j++;
        }

        if(counter > max)
        {
            max = counter;
            ch = *begin;
            anothermax = 0;
        }
        else if(counter == max && ch != *begin)
            anothermax++;   

    }

    cout << "\nThe most frequently-appearing character in that string is:  " << ch <<"\n";



}
