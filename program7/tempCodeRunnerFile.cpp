#include <iostream>

using namespace std;

int main() {
    int N, M; cin >> N >> M;
    string lines[105];
    for (int i = 0; i < N; i++) cin >> lines[i];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (lines[i][j] == *"*") {
                if (i == 0 && j == 0) {
                    ans += 1;
                } 
                else if (lines[i - 1][j] == *"." && lines[i][j - 1] == *".") {
                    ans += 1;
                }
            }
        }
    }
    cout << ans;
}
