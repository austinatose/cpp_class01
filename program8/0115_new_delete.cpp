#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "-- Revise: declare and use an int variable i ----------------------------------" << endl;
    int hisAge;
    cout << "Enter his age: ";
    // cin >> hisAge;
    scanf("%d", &hisAge);

    cout << "hisAge " << hisAge << " is stored at: " << &hisAge << endl;

    cout << "\n\n-- New knowledge: use new to request a space for an int variable ----------" << endl;
    int* pointsToMyAge = new int; //Request for memory space for an int variable

    cout << "Enter your age: ";
    // cin >> *pointsToMyAge;
    scanf("%d", pointsToMyAge);

    cout << "Your age " << *pointsToMyAge << " is stored at: " << pointsToMyAge << endl;


    // very important! delete the pointer if it is created from new
    delete pointsToMyAge; // release memory 

    return 0;
}

/*
IMPORTANCE!!! ----------------------------------
1) 'new int' returns an int pointer
2) 'new int' helps request a space in memory for an integer

3) 'delete' helps release the memory which has requested by 'new'

This is called 'dynamic memory allocation'.

*/