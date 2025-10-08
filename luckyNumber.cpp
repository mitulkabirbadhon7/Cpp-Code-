#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int n;
  	cin>>n;
  	bool count = true;
  	if(n == 4 ){
  		cout<<"YES"<<endl;
  	}
  	else{
  	string s = to_string(n);
  	for(int i = 0;i<s.length();i++){
  		if(s[i] != '4' && s[i] != '7'){
  			count = false;
  			break;
  		}

  	}
  	if(count ){
  		cout<<"YES"<<endl;
  	}
  	else{
  	cout<<"NO"<<endl;
  }
}

    return 0;
}
