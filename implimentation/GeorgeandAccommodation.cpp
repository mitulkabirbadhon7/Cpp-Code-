#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int t;
  	cin >> t;
  	int count = 0;

  	while(t--){

  		int a,b;
  		cin >> a>>b;
  		if(abs(a-b)>1) count++;
  	}
  	cout<<count<<endl;
    return 0;
}
