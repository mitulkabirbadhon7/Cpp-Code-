#include <bits/stdc++.h>
using namespace std;

//Cheak If a Number Is Even Or Odd

void EvenOdd(int x){

	int result = x & 1;

	if(result == 1) cout<<"Odd"<<endl;
	
	else cout<<"Even"<<endl;
}
// Cheak If a Number is power of 2

void PowerOf2(int x){

	int result = x & (x-1);

	if (x==0) cout<<"No"<<endl;

	else if(result == 0) cout<<"Yes "<<x<<" is a Power Of 2"<<endl;
	else cout<<"No"<<endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    EvenOdd(8);
    PowerOf2(3);

    return 0;
}