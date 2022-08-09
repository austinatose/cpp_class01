#include <bits/stdc++.h>
using namespace std;


class Day
{

private:
    string dayofweek;
    int daynum;
    int monthnum;
    int yearnum;


public:

    Day() // default constructor
    {
        daynum = 1; // init value
        monthnum = 1; // init value
        yearnum = 2000; // init value
        dayofweek = "Monday";
        cout << "Default Constructor: values not set" << endl;
    }

    Day(int daynumin, int monthnumin, int yearnumin, string dayofweekin) // overloaded constructor
    {
        daynum = daynumin;
        monthnum = monthnumin;
        yearnum = yearnumin;
        dayofweek = dayofweekin;
        cout << "Overloaded Constructor: values are set" << endl;
    }

    void printDate()
    {
        cout << "It is " << daynum << "/" << monthnum << "/" << yearnum << " and it is a " << dayofweek << "\n";
    }
};



int main() {

    Day dayOne;              // use default constructor
    Day dayTwo(16, 10, 2008, "Wednesday");    // use overloaded constructor

    dayOne.printDate();
    dayTwo.printDate();

    return 0;
}