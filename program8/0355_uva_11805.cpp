/*
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2905
*/


#include <iostream>

using namespace std;
#define int long long
#define pi pair<int,int>
#define pii pair<int,pi>
#define f first
#define s second
#define redbull ios_base::sync_with_stdio(false);cin.tie(NULL)

int32_t main() {
    redbull;
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k, p, ans;
        cin >> n >> k >> p;
        ans = (k + p) % n;
        if (ans != 0) {
            cout << "Case " << i+1 << ": " << ans << "\n";
        } else {
            cout << "Case " << i+1 << ": " << n << "\n";
        }
    }
}
