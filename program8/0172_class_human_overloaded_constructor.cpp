#include <bits/stdc++.h>
using namespace std;


class Human
{

private:
    string name;
    int age;


public:

    Human() // default constructor
    {
        age = 0; // init value
        cout << "Default Constructor: name and age not set" << endl;
    }

    Human(string humanName, int humanAge) // overloaded constructor
    {
        age = humanAge;
        name = humanName;
        cout << "Overloaded Constructor: both name and age are set" << endl;
    }

    void IntroduceMyself()
    {
        cout << "I am " << name << " and am " << age << " years old" << endl;
    }
};



int main() {

    Human firstMan;                 // use default constructor
    Human firstWoman("Eve", 20);    // use overloaded constructor

    firstMan.IntroduceMyself();
    firstWoman.IntroduceMyself();

    return 0;
}