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

    freopen("0200_uva_11614_input.txt", "r", stdin); // remove this line when you submit online
    int tc_count;
    scanf("%lld", &tc_count);

    while(tc_count--) {

        int i;
        scanf("%lld", &i);

        int u = 1, t = 0, s = 0;
        while (true) {
            t = (u*(u + 1))/2;
            if (t >= i) {
                break;
            }
            s = u;
            u += 1;
        }

        if (i == t) {
            cout << u << "\n";
        } else {
            cout << s << "\n";
        }

    }
}
/*

Here is the question:
https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2661

Quick submit at:
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=25

*/