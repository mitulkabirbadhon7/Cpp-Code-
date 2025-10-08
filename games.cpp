#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int n;
  	cin>>n;
  	int count=0;
  	vector<int>home;
  	vector<int>away;
  	while(n--){
  		int a,b;
  		cin>>a>>b;
  		home.push_back(a);
  		away.push_back(b);
  	}
  	for(int i = 0; i<home.size(); i++){

  		for(int j = 0; j<away.size(); j++){


  		
  		if(home[i]==away[j]) count++;

  	}
		  }
  	cout<<count<<endl;
    return 0;
}
