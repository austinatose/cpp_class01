#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, ans = 0;

    freopen("0052_input.txt", "r", stdin);

    scanf("%f", &a);
    scanf("%f", &b);

    cout << a << " " << b << endl;

    for (float i = a; i < b+1; i++) {
        ans += 1/(pow(i, 2));
    }

    printf("%f", ans);
}
