/*
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=4391

*/

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
    int N, X, Y, ans;
    while (cin >> N) {
        cin >> X >> Y;
        for (int i = 1; i <= N; i++) {
            X = (X + 1)/2;
            Y = (Y + 1)/2;
            ans = i;
            if (X == Y) break;
        }
        cout << ans << "\n";
    }
}
