#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int k  , w;
    long long n;

  	cin >> k >> n >> w;
  	int totalCost = 0;

  	for(int i = 1;i<=w;i++){
  		totalCost += i*k;
  	}
    if(totalCost <= n){
  	cout<<0<<endl;
    }
    else {
        cout<<totalCost-n<<endl;
    }

    
  	
    return 0;
}
