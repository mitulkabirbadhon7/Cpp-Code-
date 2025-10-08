#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int k , r;
  	cin>>k>>r;

  	for(int i =1;i<=1000;i++){
  		int total = k * i;
  		if(total % 10 == 0 || total % 10 == r){
  			cout<<i<<endl;
  			break;
  		}
  	}
    return 0;
}
