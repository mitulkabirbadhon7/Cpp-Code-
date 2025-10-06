#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	map<int,int>freq;
  	int n;
  	cin>>n;
  	for(int i = 0; i<n; i++){
  		int abc[n];
  		cin>>abc[i];

  		if(freq[i]==0){
  			cout<<"OK"<<endl;
  		}
  		else {
  			cout<<freq[i]<<endl;
  		}


  		freq[i]++;
  	}
    return 0;
}
