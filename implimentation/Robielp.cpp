#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){

		int n,k;
		cin>>n>>k;
		int count = 0;
		int gold = 0;
		vector<int>arr(n);
		for(int i = 0;i<n;i++){
			cin>>arr[i];
			if (arr[i]>=2){
				gold+= arr[i];
			}

			 else if(arr[i]==0 && gold){
				arr[i]=1;
				count++;
				gold--;
			}
		}
				cout<<count<<endl;

	}

}