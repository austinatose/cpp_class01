#include <bits/stdc++.h>
using namespace std;

int main() {

    int myNumbers[] = {1, 2, 3, 4, 5};

    int* pointToNums = myNumbers;

    cout << "pointToNums : " << pointToNums << endl;

    cout << "&myNumbers[0] : " << &myNumbers[0] << endl;

    for(int i = 0; i < 5; i++)
        cout << myNumbers[i] << " is same as: " << pointToNums[i] << endl; 
    /*
    Please use pointer myNumbers and i to express the same value as myNumbers[i]
    */

//    myNumbers = pointToNums;


    return 0;
}


/*
IMPORTANCE!!! ------------------------------------------------------------
Array variable is nothing but a normal pointer.
It points to the 1st element of the array.

Array pointer is not modifiable, cannot be used as lvalue.
--------------------------------------------------------------------------
*/