#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> p, m, pe;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) p.push_back(i + 1);
        else if (v[i] == 2) m.push_back(i + 1);
        else if (v[i] == 3) pe.push_back(i + 1);
    }

    int mm = min({p.size(), m.size(), pe.size()});
    cout << mm << "\n";

    for (int i = 0; i < mm; i++) {
        cout << p[i] << " " << m[i] << " " << pe[i] << "\n";
    }

    return 0;
}
