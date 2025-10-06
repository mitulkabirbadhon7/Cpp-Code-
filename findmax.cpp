#include<bits/stdc++.h>
using namespace std;

int main(){

	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	//cin>>a>>b>>c;

	if(a>b && a>c){
		// cout<<a<<"is Maximum";
		printf(" %dis Maximum",a);
	}
	if(b>a && b>c){
		// cout<<b<<" is Maximum";
		printf("%d is Maximum",b);
	}
	else printf("%d is Maximum",c);
}