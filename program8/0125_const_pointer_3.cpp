#include <bits/stdc++.h>
using namespace std;

int main() {

    int hoursInDay = 24;

    const int* const pHoursInDay = &hoursInDay;

    // *pHoursInDay = 25; // Not OK!

    int daysInMonth = 30;
    // pHoursInDay = &daysInMonth; // Not OK!

    return 0;
}