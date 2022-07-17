#include <bits/stdc++.h>
using namespace std;




void square(int& number) {
    number *= number;
}

int square2(int number) {
    return number * number;
}

void square_pointer(int* number) {
    *number *= *number;
}


int main() {


    int number = 0;
    cout << "Enter a numbre you wish to square: ";
    cin >> number;

    square(number);
    cout << "Square is: " << number << endl;

    number = square2(number);
    cout << "Square is: " << number << endl;

    square_pointer(&number);
    cout << "Square is: " << number << endl;

    return 0;
}

/*
IMPORTANCE!!! -----------------------------------------------
When a called function defines its params as reference:
1) the called function can work on params that have not been copied from the calling function.
2) This has significant performance improvements.


Reference vs Pointer:
1) Pointer can be NULL, refererence cannot be NULL.
2) Pointer can point to here and there, reference can only bound to 1 variable for its whole life.
3) Pointer use *pI to get the value, reference use as a normal variable, meaning reference is simpler.

IN SUMMARY: if you can use reference, then use reference.
*/