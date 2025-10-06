#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        int a[n + 10];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int forward[n + 10];
        int backword[n + 10];
        forward[0] = backword[n + 1] = 0;

        for(int i = 1; i <= n; i++) {
            forward[i] = __gcd(forward[i - 1], a[i]);
        }

        for(int i = n; i >= 1; i--) {
            backword[i] = __gcd(backword[i + 1], a[i]);
        }

        while(q--) {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backword[r + 1]) << '\n'; // Added newline
        }
    }

    return 0;
}
