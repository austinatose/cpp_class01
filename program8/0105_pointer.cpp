#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "-- 1) Revise ---------------------------------------\n";

    /*

    & is called "address-of operator"
             or "reference operator" -> change a value to its address
    */


    int age = 30;
    cout << "Intege age is located at: " << &age << endl;
    cout << "Each integer takes: " << sizeof(int) << " bytes" << endl;
    cout << "So, variable age takes address from: " << &age << " to " << &age + 1 << endl;

    cout << "--------\n";

    const double Pi = 3.1415926; 
    cout << "Double Pi is located at: " << &Pi << endl;
    cout << "Each double takes: " << sizeof(double) << " bytes" << endl;
    cout << "So, variable Pi takes address from: " << &Pi << " to " << &Pi + 1 << endl;


    cout << "\n\n 2) new variable type: pointer ------------------------------------\n";

    int* pointerToInt; // pointerToInt is of type 'int pointer'

    /*
    What is a pointer?
    A pointer is just a new type of variable, just like int / float / bool
    A pointer stores another variable's address
    */

    int* pI2 = NULL;

    int* pI3 = &age;
    cout << "Pointer pI3 points to int var age now, which is located at: " << pI3 << endl;

    int dogsAge = 9;
    pI3 = &dogsAge;
    cout << "Pointer pI3 points to int var dogsAge now, which is located at: " << pI3 << endl;
    



    cout << "\n\n-- 3) Dereference operator * -------------------------------------------\n";
    // dereference operator *  -> change a address to its value

    cout << "'*pI3' tells you the value which pointer pI3 points to." << endl;
    cout << "*pI3 = " << *pI3 << endl; 

    return 0;
}


/*
IMPORTANCE!!! -------------------------------------------------
1) int* pI;         int*     declare an int pointer variable
2) cout << *pI      *pI      the value which pointer pI points to
*/