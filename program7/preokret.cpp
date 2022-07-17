#include <iostream>

using namespace std;

int scores[2900][2];
int A, B;
int main() {
    cin >> A;
    int ans1 = 0;
    int ans2 = 0;
    for (int i = 1; i <= A; i++) {
        int x = 0; cin >> x;
        if (x <= 1440) ans1 += 1;
        scores[x][0]++;
    }
    cin >> B;
    for (int i = 1; i <= B; i++) {
        int x = 0; cin >> x;
        if (x <= 1440) ans1 += 1;
        scores[x][1]++;
    }

    int anow = 0, bnow = 0;
	bool awin = true, bwin = true;
	for (int i = 0; i < 2900; i++) {
		if (!scores[i][0] && !scores[i][1]) continue;
		anow += scores[i][0];
		bnow += scores[i][1];
		if (anow > bnow) {
			if (!awin) ans2 += 1;
			awin = true, bwin = false;
		}
		if (bnow > anow) {
			if (!bwin) ans2 += 1;
			bwin = true, awin = false;
		}
    }
    cout << ans1 << "\n" << ans2;
}
