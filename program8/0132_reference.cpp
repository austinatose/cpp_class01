#include <bits/stdc++.h>
using namespace std;

int main() {

    int original = 30;
    cout << "original = " << original << endl;
    cout << "original is at address : " << &original << endl;

    int& ref1 = original; // reference means alias, it's just another name of the variable
    cout << "ref1 is at address : " << &ref1 << endl;


    int& ref2 = ref1;
    cout << "ref2 is at address : " << &ref2 << endl;
    cout << "Therefore, ref2 = " << ref2 << endl;
    cout << "----------------------------------" << endl;

    // int& ref3; // ERROR! A reference must be bound to some variable at declartion time.

    int i = 10;
    ref2 = i; // ATTENTION!! This is not binding ref2 with i, this is assigning i to original.

    cout << "Now, ref2 = " << ref2 << ", original = " << original << endl;

    return 0;
}

/*
IMPORTANCE!!! ------------------------------------------------
1) int& means : create an alias name to an existing variable.
                In C++, we call this alias name as 'reference'

2) a reference must be initialized / bound to some variable at declartion time.       
   And it can only be bound to some variable ONCE AND ONLY ONCE for its whole life at declare time.

IN SUMMARY: reference is just another name (alias) for an already existing object.
-------------------------------------------------------------
*/