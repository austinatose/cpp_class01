#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int lights[n];
    for (int i = 0; i < n; i++){
        lights[i] = 0;
    }
    for (int z = 0; z < n; z ++) {
            cout << lights[z];
    }
    cout << endl;
    int k; cin >> k;
    for (int m = 1; m < k+1; m++){
        if (m % 2 == 1) {
            for (int j = m; j < n+1; j += m) {
                lights[j-1] = 1;
            }
        }
        if (m % 2 == 0) {
            for (int j = m; j < n+1; j += m) {
                lights[j-1] = 0;
            }
        }
        for (int z = 0; z < n; z ++) {
            cout << lights[z];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        if (lights[i] == 1) {
            cout << i+1 << endl;
        } 
    }
}
