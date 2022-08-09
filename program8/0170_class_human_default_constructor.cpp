#include <bits/stdc++.h>
using namespace std;

class Human
{

private:
    string name;
    int age;

public:

    Human() // constructor
    {
        age = 1; // init value
        cout << "Constructed an instance of class Human" << endl;
    }

    void SetName(string humanName)
    {
        name = humanName;
    }

    void SetAge(int humanAge)
    {
        age = humanAge;
    }

    void IntroduceMyself()
    {
        cout << "I am " << name << " and am " << age << " years old" << endl;
    }

};



int main() {

    Human firstWoman;
    firstWoman.SetAge(28);
    firstWoman.SetName("Eve");
    firstWoman.IntroduceMyself();

    return 0;
}