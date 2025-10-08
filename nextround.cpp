#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	int sum = 0;

	for(int i = 0;i<n;i++){
		cin>>arr[i];

	}
	for(int i = 0;i<n;i++){
		if(arr[i]>=arr[k-1] &&arr[i]>0){
			sum++;
		}
	}
	cout<<sum<<endl;
  
    return 0;
}
