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
#define range(a, b, n) int a = b; a < n; a++
#define rrange(a, b, n) int a = b; a <= n; a++
#define arrin(a, n) for (range(i, 0, n)) cin >> a[i]
#define arrinn(a, b, n) for (range(i, 0, n)) cin >> a[i] >> b[i]
#define arr1n(a, n) for (rrange(i, 1, n)) cin >> a[i]
#define arr1nn(a, b, n) for (rrange(i, 1, n)) cin >> a[i] >> b[i]
#define arrout(a, n) for (range(i, 0, n)) cout << a[i] << " "
#define endl "\n"
#define redbull() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define maxx(a, b) a = max(a, b)
#define minn(a, b) a = min(a, b)
#define itarr(a, n) for (auto i : n)
#define MOD 13371337
#define NUM 10005

int T = 0;
int N = 1, Q = 1;

int bs(int A[], int n, int x) {
    int low = 0, high = n;
    while (high - low > 1) {
        int mid = (high + low) / 2;
        if (A[mid] > x) high = mid;
        else low = mid;
    }
    return low;
}

int32_t main() {
    redbull();
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while (true) {
        T++;
        cin >> N >> Q;
        if (N == 0 && Q == 0) exit(0);
        cout << "Case# " << T << ":" << endl;
        int nums[N];
        int queries[Q];
        arrin(nums, N);
        arrin(queries, Q);
        sort(nums, nums + N);
        itarr(i, queries) {
            cout << i << " found at " << bs(nums, N, i) + 1 << endl;
        }
    }
}
