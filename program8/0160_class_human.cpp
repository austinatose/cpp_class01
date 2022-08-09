#include <bits/stdc++.h>
using namespace std;


class Human {

public:

    string name;
    int age;
    string placeOfBirth = "Singapore";

    void IntroduceMyself() {
        cout << "I am " + name << " and I am " << age << " years old. I was born in " << placeOfBirth << endl;
    }
};


int main() {

    // Q) How to create an object of class Human ===========================================

    // Solution 1 -------------------------------

    Human firstMan; // this will create an object of class Human immediately.

    firstMan.name = "Adam";
    firstMan.age = 30;

    // call method of the object
    firstMan.IntroduceMyself();



    // Solution 2 --------------------------------

    Human* firstWoman = new Human;
    firstWoman->name = "Eve";
    firstWoman->age = 28;
    firstWoman->IntroduceMyself();




    return 0;
}

/*
Naming Convention:
1) class name & function name : PascalCase 
2) field name: camelCase
*/
