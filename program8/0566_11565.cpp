#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
#define vi vector
#define vint vi<int>
#define pi pair<int,int> 
#define pii pair<int,pi>
#define vp vector<pi>
#define p_q priority_queue
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define ms(a, x) memset(a, x, sizeof(a))
#define fil(a, x) fill(a, a + sizeof(a), x)
#define range(a, b, n) for(int a = b; a < n; a++)
#define rrange(a, b, n) for(int a = b; a <= n; a++)
#define arrin(a, n) range(i, 0, n) cin >> a[i]
#define arrinn(a, b, n) range(i, 0, n) cin >> a[i] >> b[i]
#define arr1n(a, n) rrange(i, 1, n) cin >> a[i]
#define arr1nn(a, b, n) rrange(i, 1, n) cin >> a[i] >> b[i]
#define arrout(a, n) range(i, 0, n) cout << a[i] << " "
#define endl "\n"
#define redbull() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define maxx(a, b) a = max(a, b)
#define minn(a, b) a = min(a, b)
#define itarr(a, n) for (auto i : n)
#define MOD 13371337
#define NUM 505
#define INF 10000000000

bool found = false;
int N, A, B, C;
int32_t main() {
    redbull();
    cin >> N;
    range(c, 0, N) {
        cin >> A >> B >> C;
        found = false;
        for(int x = -22; x <= 22 && !found; x++) { // cbrt(10000) = 21.5443
            if (x * x <= C) {
                for(int y = -100; y <= 100 && !found; y++) {
                    if(y != x && x * x + y * y <= C) {
                        for(int z = -100; z <= 100 && !found; z++) {
                            if (z != x && z != y && x * x + y * y + z * z == C && x * y * z == B && x + y + z == A) {
                                cout << x << " " << y << " " << z << endl;
                                found = true;
                            }
                        }
                    }
                }
            }
        }
        if (!found) cout << "No solution." << endl;
    }
}
