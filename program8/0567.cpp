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

int n, m;
int queries[23][3], perm[9];

int32_t main() {
    redbull();
    range(c, 0, 20) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        range(j, 0, m) cin >> queries[j][0] >> queries[j][1] >> queries[j][2];
        int ans = 0;
        range(j, 0, n) perm[j] = j;

        do { //from https://cplusplus.com/reference/algorithm/next_permutation/
            int inc = 1;
            range(i, 0, m) {
                int temp = abs(perm[queries[i][0]] - perm[queries[i][1]]);
                if ((queries[i][2] > 0 && temp > queries[i][2]) || (queries[i][2] < 0 && temp <- queries[i][2]) ){
                    inc = 0;
                    break;
                }
            }
            ans += inc;
        } while (next_permutation(perm, perm + n));
        cout << ans << endl;
    }
}
