#include <bits/stdc++.h>
using namespace std;

int main() {

    int i = 0; 

    int* pI = &i;

    cout << "Read value from console, assign it to i. Solution 1) -----------------" << endl;
    scanf("%d", &i);
    cout << "Now i is: " << i << ", *pI is: " << *pI << endl;



    cout << "Read value from console, assign it to i. Solution 2) -----------------" << endl;
    cin >> i;
    cout << "Now i is: " << i << ", *pI is: " << *pI << endl;


    cout << "Read value from console, assign it to i. Solution 2) -----------------" << endl;
    cin >> *pI;
    cout << "Now i is: " << i << ", *pI is: " << *pI << endl;


    return 0;
}