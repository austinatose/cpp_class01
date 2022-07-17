#include <bits/stdc++.h>
using namespace std;

int main() {

    int hoursInDay = 24;

    const int* pointsToInt = &hoursInDay;

    // *pointsToInt = 25; // Not OK! 

    cout << "*pointsToInt : " << *pointsToInt << endl;

    hoursInDay = 25;
    cout << hoursInDay << endl;

    cout << "*pointsToInt : " << *pointsToInt << endl;

    int monthInYear = 12;
    pointsToInt = &monthInYear; // OK! Pointer is ok to change! 
    cout << "*pointsToInt : " << *pointsToInt << endl;

    return 0;
}

/*
IMPORTANCE!!! ------------------------------------------------------------
                the pointer         the value which pointer points to
int* const      cannot change       can change
const int*      can change          cannot change (via the pointer)
--------------------------------------------------------------------------
*/