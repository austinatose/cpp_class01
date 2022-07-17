#include <iostream> 

using namespace std;

int main () {
    for (int i = 0; i < 10; i++) {
        int t, n;
        cin >> t >> n;
        int delay = 0;
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            if (c == 'B')
                delay += t;
            if (delay > 0)
                --delay;
        }
        cout << delay << "\n";
    }
}
