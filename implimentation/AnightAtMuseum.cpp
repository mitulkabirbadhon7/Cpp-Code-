#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int diff = 0;
    char current = 'a'; 

    for (char c : s) {
        int clockwise = abs(c - current);
        int counter_clockwise = 26 - clockwise;
        diff += min(clockwise, counter_clockwise);
        current = c;
    }

    cout << diff << endl;
    return 0;
}
