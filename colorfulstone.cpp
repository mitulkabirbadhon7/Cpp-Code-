#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  	string s,t;
  	cin >> s >> t;
  	int count =1;
  	int j = 0;

  	for(int i = 0;i<t.size();i++){
  		if(t[i] == s[j]){
  		 count++;
  		 j++;
  	}
  }
 

  	cout<<count<<'\n';
    return 0;
}
