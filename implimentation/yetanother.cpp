#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 2; i <=100; i++) { // try from 2 upwards
            bool ok = true;
            for (int x : v) {
                if (__gcd(i, x) != 1) { // not coprime
                    ok = false;
                    break;
                }
            }
            if (ok) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
