#include <iostream>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    for (int i = 10; i < 101; i++) {
        if ((i - a)%3 == 0 and (i - b)%5 == 0 and (i - c)%7 == 0) {
            cout << i << endl;
            exit(0);
        }
    }
    cout << "No answer";
}
