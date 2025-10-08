#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    set<ll> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);

 
    cout << 4 - st.size() << endl;

    return 0;
}
