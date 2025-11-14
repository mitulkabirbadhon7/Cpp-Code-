#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    map<char,int> freq1, freq2, freq3;

    for (auto it : a) freq1[it]++;
    for (auto it : b) freq2[it]++;
    for (auto it : c) freq3[it]++;

    bool ok = true;

    set<char> all_chars;
    for (auto it : a) all_chars.insert(it);
    for (auto it : b) all_chars.insert(it);
    for (auto it : c) all_chars.insert(it);

    for (auto ch : all_chars) {
        if (freq3[ch] != freq1[ch] + freq2[ch]) {
            ok = false;
            break;
        }
    }

    if (ok) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
