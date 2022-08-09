#include <bits/stdc++.h>
using namespace std;

class Human 
{

private:
    int age;

public:

    void SetAge(int inputAge)
    {
        if(inputAge > 0)
            age = inputAge;
    }

    int GetAge()
    {
        if ( age > 30)
            return age - 2;
        else
            return age;
    }
};



int main() {

    Human firstMan;
    firstMan.SetAge(35);

    Human firstWoman;
    firstWoman.SetAge(22);

    cout << "Age of firstMan " << firstMan.GetAge() << endl;
    cout << "Age of firstWoman " << firstWoman.GetAge() << endl;

    return 0;
}


/*
IMPORTANCE!!! ---------------------------------------------------------------
For private properties of the class, you can only set/get the value via its setter and getter.
1) You can do validation in setter
2) You can add extra logic in getter
-----------------------------------------------------------------------------
*/