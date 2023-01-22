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
#define NUM 5000007
#define INF 10000000000

int n; stack<int> dex[25]; //initialise array of stacks
int numpos[25]; // numpos[i] is the current index of i in dex

void mon(int a, int b) {
    int posa = numpos[a];
    int posb = numpos[b];
    int temp;


    while (true) { //loop for b
        if (dex[posb].top() == b) break;
        else {
            temp = dex[posb].top();
            dex[posb].pop();
            dex[temp].push(temp); //push temp to its original stack
            numpos[temp] = temp;
        }
    }

    while (true) { //loop for a
        if (dex[posa].top() == a) {
            dex[posa].pop();
            dex[posb].push(a);
            numpos[a] = posb;
            break;
        } else {
            temp = dex[posa].top();
            dex[posa].pop();
            dex[temp].push(temp); //push temp to its original stack
            numpos[temp] = temp;
        }
    }
}

void mov(int a, int b) {
    int posa = numpos[a];
    int posb = numpos[b];
    int temp;

    while (true) { //loop for a
        if (dex[posa].top() == a) {
            dex[posa].pop();
            dex[posb].push(a);
            numpos[a] = posb;
            break;
        } else {
            temp = dex[posa].top();
            dex[posa].pop();
            dex[temp].push(temp); //push temp to its original stack
            numpos[temp] = temp;
        }
    }
}

void pon(int a, int b) {
    int posa = numpos[a];
    int posb = numpos[b];
    int temp;

    while (true) { //loop for b
        if (dex[posb].top() == b) break;
        else {
            temp = dex[posb].top();
            dex[posb].pop();
            dex[temp].push(temp); //push temp to its original stack
        }
    }

    vint tempv;
    while (true) { //loop for a
        if (dex[posa].top() == a) {
            dex[posa].pop();
            tempv.pb(a);
            break;
        } else {
            temp = dex[posa].top();
            dex[posa].pop();
            tempv.pb(temp);
        }
    }

    //insert elements into bstack in order
    reverse(all(tempv));
    range(i, 0, tempv.size()) {
        dex[posb].push(tempv[i]);
        numpos[tempv[i]] = posb;
    }
}

void pov(int a, int b) {
    int posa = numpos[a];
    int posb = numpos[b];
    int temp;

    vint tempv;
    while (true) { //loop for a
        if (dex[posa].top() == a) {
            dex[posa].pop();
            tempv.pb(a);
            break;
        } else {
            temp = dex[posa].top();
            dex[posa].pop();
            tempv.pb(temp);
        }
    }

    //insert elements into bstack in order
    reverse(all(tempv));
    range(i, 0, tempv.size()) {
        dex[posb].push(tempv[i]);
        numpos[tempv[i]] = posb;
    }
}

int32_t main() {
    cin >> n; //input

    range(i, 0, n) dex[i].push(i); //push i to each stack
    range(i, 0, n) numpos[i] = i; //initialise numpos array

    //parse input

    str ina, inb;
    int a, b;

    while (true) {
        cin >> ina;
        if (ina == "quit") break;
        cin >> a >> inb >> b;
        if (a == b or numpos[a] == numpos[b]) continue;
        if (ina == "move" and inb == "onto") mon(a, b);
        if (ina == "move" and inb == "over") mov(a, b);
        if (ina == "pile" and inb == "onto") pon(a, b);
        if (ina == "pile" and inb == "over") pov(a, b);
    }

    //output
    range(i, 0, n) {
        cout << i << ": ";
        vint out;
        while (!dex[i].empty()) {
            out.push_back(dex[i].top());
            dex[i].pop();
        }
        reverse(all(out));
        arrout(out, out.size());
        cout << endl;
    }
}
