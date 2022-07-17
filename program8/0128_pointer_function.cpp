#include <bits/stdc++.h>
using namespace std;


void calcArea(const double* const ptrPi,
              const double* const ptrRadius,
              double* const ptrArea)
{
    if(ptrPi && ptrRadius && ptrArea) 
        *ptrArea = (*ptrPi) * (*ptrRadius) * (*ptrRadius);
}


int main() {

    const double Pi = 3.1416;

    cout << "Enter radius of circle: ";
    double radius = 0;
    cin >> radius;

    double area = 0;

    calcArea(&Pi, &radius, &area);

    cout << "Area is: " << area << endl;

    return 0;
}