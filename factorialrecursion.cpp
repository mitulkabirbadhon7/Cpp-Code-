#include <bits/stdc++.h>
using namespace std;
#define ll long long

//5 != 1*2*3*4*5
int fact_n(int n){
		if(n==0){
			return 1;
		}
	return fact_n(n-1)*n;
}
int main() {

  	cout<<fact_n(4)<<endl;
    return 0;
}
