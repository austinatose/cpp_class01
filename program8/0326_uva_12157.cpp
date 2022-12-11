#include <bits/stdc++.h>

using namespace std;
#define int long long
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define s second
#define redbull ios_base::sync_with_stdio(false);cin.tie(NULL)

int32_t main() {
    redbull;
    int T; cin >> T;
    for (int c = 0; c < T; c++) {
        cout << "Case " << c+1 << ": ";
        int N; cin >> N;
        float calls[N];
        for (int i = 0; i < N; i++) {
            cin >> calls[i];
        }
        int mileCost = 0;
        int juiceCost = 0;
        for (int j = 0; j < N; j++) {
            //mile
            float tester = calls[j] / 30;
            tester = floor(tester);

            tester += 1;
            mileCost += tester * 10;
            //juice
            tester = calls[j] / 60;
            tester = floor(tester);

            tester += 1;
            juiceCost += tester * 15;
        }
        if (mileCost < juiceCost) {
            cout << "Mile " << mileCost;
        } else if (mileCost > juiceCost) {
            cout << "Juice " << juiceCost;
        } else if (mileCost = juiceCost) {
            cout << "Mile " << "Juice " << mileCost;
        }
        cout << "\n";
    }
}