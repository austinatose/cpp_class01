#include <bits/stdc++.h>
using namespace std;

int main() {

    int original = 30;
    const int& constRef = original;

    // constRef = 40; // Not allowed, you are not able to assign a new value to original via constRef

    // int& ref2 = constRef; // Not allowed, cannot bind to a non-const reference.

    const int& constRef2 = constRef;


    return 0;
}