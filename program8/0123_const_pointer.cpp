#include <bits/stdc++.h>
using namespace std;

int main() {

    int daysInMonth = 30;

    int* const pDaysInMonth = &daysInMonth;

    *pDaysInMonth = 31;

    int daysInLunarMonth = 28;
    // pDaysInMonth = &daysInLunarMonth; // Not OK! Cannot change address!

    return 0;
}

/*
IMPORTANCE!!! -----------------------------------
int* const pDaysInMonth = &daysInMonth;     pDaysInMonth pointer is constant
                                            pDaysInMonth points to int variable daysInMonth forever.

*/