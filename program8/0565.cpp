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
#define fill(a, x) memset(a, x, sizeof(a))
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

int n;

int32_t main() {
    redbull();
    cin >> n;
    pair<int,str> arr[n];
    range(i, 0, n) {
        cin >> arr[i].s;
        arr[i].f = arr[i].s.length();
    }
    sort(arr, arr + n, greater<pair<int,str> >());
    range(i, 0, n) {
        cout << arr[i].s << endl;
    }
}
