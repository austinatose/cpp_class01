#include <bits/stdc++.h>
using namespace std;
#define int long long
#define str string
#define vi vector
#define vint vi<int>
#define pi pair<int,int> 
#define pii pair<int,pi>
#define vp vector<pi>
#define pq priority_queue
#define pqi pq<int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define elif else if
#define all(x) x.begin(), x.end()
#define erasee(v, x) v.erase(remove(all(v), x), v.end());
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
#define invec(v, x) find(v.begin(), v.end(), x) != v.end()
#define MOD 13371337
#define NUM 100005
#define INF 10000000000

int N, T;
int precomp[NUM];

int32_t main() {
    redbull();
    cin >> T;
    range(i, 1, NUM) {
        
        int j = i;
        int x = 0;
        while (j) {
            x += j % 10;
            j /= 10;
        }

        int M = i + x;
        if (M <= 100000) {
            if (precomp[M] == 0) precomp[M] = i;
        }
    }
    while (T--) {
        cin >> N;
        if (precomp[N] != 0) cout << precomp[N] << endl;
        else cout << 0 << endl;
    }
}
