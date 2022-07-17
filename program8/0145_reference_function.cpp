#include <bits/stdc++.h>
using namespace std;

void square(const int& number, int& result)
{
    result = number * number;
    // number *= number;
}



int main() {

    cout << "enter a number you wish to square: ";
    int number = 0;
    cin >> number;

    int result = 0;
    square(number, result);

    cout << "Square of " << number << " = " << result << endl;


    return 0;
}

/*
IMPORTANCE!!! ---------------------------------------------
const references indicate that:
a parameter is an input parameter, and ensure that its value cannot be modified.
-----------------------------------------------------------
*/