#include<bits/stdc++.h>
using namespace std;

const int N= 1e7+10;
int Prearr[N];

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i = 1;i<=n;i++){
		cin>>arr[i];
		Prearr[i]=Prearr[i-1]+arr[i];
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<Prearr[r]-Prearr[l-1]<<" ";
	}


}


