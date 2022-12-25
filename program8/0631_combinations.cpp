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
#define NUM 5000007
#define INF 10000000000

// At first, there are n people numbered 1 to n around a circle and every second remaining person will be eliminated until only one survives. Let the number of the survivor be x. The process is then repeated with x number of people and let the survivor number is y. The process then starts with y number of people and so on. The repetition ends when the survivor is in the last position in the circle.

// Example with n = 5:
// After the first elimination round, the survivor is person 3. Because this is is not the last person in the circle, a new elimination round with 3 people is started.

// For each test case, print the serial number of the case, a colon, an space, total number of repetitions (the number of times the elimination process is done after the initial elimination round with n people), an space and the position of the survivor at last.

int n, k;

int32_t main() {
    cin >> n >> k;
    int nums[n];
    iota(nums, nums + n, 1);
    
}