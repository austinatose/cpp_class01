#include <iostream>
using namespace std;

int main() {

    int arr[5] = {1, 2};

    cout << "sizeof(arr) is: " << sizeof(arr) << endl;
    cout << "sizeof(int) is: " << sizeof(int) << endl;

    cout << "size of arr is: " << sizeof(arr) / sizeof(int) << endl;

    cout << "example 2 --------------------------------\n";

    double arr2[] = {1.0, 2.0, 3.0, 4.0};
    cout << "sizeof(arr) is: " << sizeof(arr2) << endl;
    cout << "sizeof(double) is: " << sizeof(double) << endl;
    cout << "size of arr is: " << sizeof(arr2) / sizeof(double) << endl;



    return 0;
}