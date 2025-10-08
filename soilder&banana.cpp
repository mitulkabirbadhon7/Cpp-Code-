#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int k , n , w;

  	cin >> k >> n >> w;
  	int totalCost = k;

  	for(int i = 2;i<=w;i++){
  		totalCost += i*k;
  	}
  	cout<<totalCost-n<<endl;
  	
    return 0;
}
