#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int tost = (k * l) / nl;
    int lime = c * d;
    int salt = p / np;

    int min_toasts = min({tost, lime, salt});
    int ans = min_toasts / n;

    cout << ans << endl;
    return 0;
}
