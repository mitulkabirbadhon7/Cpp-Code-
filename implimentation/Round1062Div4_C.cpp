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
        vector<int>v(n);
        for (int i = 0; i<n; i++){
        	cin>>v[i];
        }

        vector<int>even,odd;
        for (int x : v) {
            if (x%2 == 0) even.push_back(x);
            else odd.push_back(x);
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        int e = 0, o = 0;
        for (int x : v) {
            if (x%2== 0) cout<<even[e++]<< " ";
            else cout<<odd[o++]<< " ";
        }
        cout<<"\n";
    }

    return 0;
}
