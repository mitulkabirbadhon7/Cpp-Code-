#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int n;
	cin>>n;
	int count = 0;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	for(int i = 0;i<n;i++){
		if(arr[i]>=k){
			count++;
		}
	}
	cout<<count<<endl;
  
    return 0;
}
