#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
    
int main() {
    int a = 2, b = 3;
    cout << a << " " << b << "\n";
    swap(a, b);
    cout << a << " " << b;
    return 0;
}