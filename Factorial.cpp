#include <bits/stdc++.h>
using namespace std;
#define ll long long
int fact(int n){
	if (n == 0) return 1;
	return fact(n-1) * n;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  cout<< fact(5) << '\n';
    return 0;
}

