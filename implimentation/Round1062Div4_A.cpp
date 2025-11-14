#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
    	int a,b,c,d;
    	cin >> a>> b >> c >> d;

    	set<int>s;
    	s.insert(a);
    	s.insert(b);
    	s.insert(c);
    	s.insert(d);
    	if(s.size()==1) cout<<"Yes\n";
    	else cout<<"No\n";

    }

    return 0;
}