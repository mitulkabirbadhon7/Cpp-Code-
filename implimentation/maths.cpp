#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> v(4);
    for (int i = 0; i < 4; i++) cin >> v[i];

    sort(v.begin(), v.end()); 

    long long S = v[3];

    long long c = S - v[0];
    long long b = S - v[1]; 
    long long a = S - v[2]; 

    cout << a << " " << b << " " << c;
}
