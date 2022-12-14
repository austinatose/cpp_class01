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

int d, x, y, anscount;
int row[9];

void find(int testindex) {
    rrange(i, 1, 8) {
        bool go = true;
        range(k, 1, testindex) {if (row[k] == i || (abs(row[k] - i) == abs(k - testindex))) go = false;}
        if (go) {
            row[testindex] = i;
            if (testindex == 8 && row[y] == x) {
                anscount++;
                cout << ' ' << anscount << "      " << row[1];
                rrange(j, 2, 8) cout << ' ' << row[j];
                cout << endl;
            } else find(testindex + 1);
        }
    }
}

int32_t main() {
    redbull();
    cin >> d;
    while (d--) {
        ms(row, 0);

        cin >> x >> y;
        int anscount = 0;
        cout << "SOLN       COLUMN\n #      1 2 3 4 5 6 7 8\n\n";

        find(1);

        if (d) cout << endl;
    }
}


/*
#include <bits/stdc++.h>
using namespace std;
int row[9], TC, a, b, lineCounter;

bool place(int col, int tryrow) {
    for (int prev = 1; prev < col; prev++)
        if (row[prev] == tryrow || (abs(row[prev] - tryrow) == abs(prev - col)))
            return false; // an infeasible solution
    return true;
}

void backtrack(int col) {
for (int tryrow = 1; tryrow <= 8; tryrow++)
    if (place(col, tryrow)) {
        row[col] = tryrow;
        if (col == 8 && row[b] == a) {
            printf("%2d      %d", ++lineCounter, row[1]);
            for (int j = 2; j <= 8; j++) printf(" %d", row[j]);
            printf("\n"); }
        else backtrack(col + 1);
}}

int main() {
    scanf("%d", &TC);
    while (TC--) {
        scanf("%d %d", &a, &b);
        memset(row, 0, sizeof row); lineCounter = 0;
        printf("SOLN      COLUMN\n");
        printf(" #       1 2 3 4 5 6 7 8\n\n");
        backtrack(1);
        if (TC) printf("\n"); // return 0;
}}
*/