#include <iostream>

using namespace std;

int main() {
    int N, X, sum = 0, more = 0, less = 0; cin >> N;
    int deck[13] = {0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 16, 4};
    for (int i = 0; i < N; i++) {
        int val; cin >> val;
        deck[val] -= 1;
        sum += val;
    }
    X = 21 - sum;
    for (int i = X + 1; i < 12; i++) more += deck[i];
    less = 52 - N - more;
    if (more > less) cout << "DOSTA";
    else cout << "VUCI";
}
