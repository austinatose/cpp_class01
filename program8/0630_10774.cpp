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

int tc, n, repcount, survivor;

void print(list<int> l) {
    for (auto i : l) cout << i << " ";
    cout << endl;
}

int32_t main() {
    cin >> tc;
    rrange(i, 1, tc) {
        cin >> n;
        list<int> l;
        repcount = 0;
        survivor = 0;
        // generate(begin(l), end(l), [&]{return k++;}); not working on macos
        rrange(j, 1, n) l.pb(j);
        auto iter = begin(l);
        while (l.size() > 1) {
            print(l);
            cout << *iter << endl;
            iter++;
            if (iter == end(l)) {iter = begin(l);}
            cout << *iter << endl;
            iter = l.erase(iter);
            cout << *iter << endl;
            if (iter == end(l)) iter = begin(l);
            repcount++;
        }
        survivor = *begin(l);
        cout << "Case " << i << ": " << repcount << " " << survivor << endl;

    }
}
