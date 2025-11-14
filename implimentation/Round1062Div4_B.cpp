#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int len;
        cin >> len;

        string s1, s2;
        cin >> s1 >> s2;

        if (s1.size() != s2.size()) {
            cout << "No\n";
            continue;
        }

        map<char, int> freq1, freq2;
        for (char c : s1) freq1[c]++;
        for (char c : s2) freq2[c]++;

        if (freq1 == freq2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}
