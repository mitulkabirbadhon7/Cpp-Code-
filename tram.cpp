#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

  	int n;
  	cin >> n;
  	int a[n];
  	int b[n];
  	int sum [n+1]={0};
  	for(int i = 0;i<n;i++){
  		cin >> a[i] >> b[i];
  	}
  	for(int i = 1; i<= n ;i++){
  		sum[i] = sum[i-1] - a[i-1] + b[i-1];
  	}
  	 int maxVal = *max_element(sum, sum + n);
  	 cout<<maxVal<<endl;
    return 0;
}
