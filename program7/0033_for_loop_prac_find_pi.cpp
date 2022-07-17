#include <iostream>

using namespace std;

int main() {
    double pi = 0;
    double count = 1;
    while (true) {
        pi += 1/count;
        pi -= 1/(count+2);
        cout << pi << "\n";
        count += 4;
        if (count > (1e6)) {
            break;
        }
    }
    cout << pi*4;
}