#include <bits/stdc++.h>
using namespace std;

int main() {

    int arrSize;
    cout << "How big is your array? ";
    cin >> arrSize;

    // int i1[arrSize]; // This doesn't work! ILLEGAL!

    double* pointToNums = new double[arrSize]; // pointer to a block of 10 integers

    // dynamic memory allocation

    for(int i = 0; i < arrSize; i++) {
        *(pointToNums + i) = i * i; //指针加减，等于跳到前一个，或者下一个value
    }

    for(int j = 0; j < arrSize; j++) {
        cout << "arr[" << j << "] = " << *(pointToNums + j) << ", at address: " << (pointToNums + j) << endl;
    }

    delete[] pointToNums; 

    return 0;
}