#include<bits/stdc++.h>
using namespace std;

int main(){

	int x,y;
	cin>>x>>y;
	set<pair<int,int>>s;
	for(int i = 1;i<=6;i++){

		for(int j = 1;j<=6;j++){

			if(i+j>=x){
				s.insert({i,j});
			}
			else if(abs(i-j)>=y){
				s.insert({i,j});
			}
		}

	}
	double result = double(s.size())/36;
	cout << fixed << setprecision(12);
	cout<<result;
	
}