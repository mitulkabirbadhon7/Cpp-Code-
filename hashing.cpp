#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 10e7+10;
int hashArr[N];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        hashArr[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x; cin>>x;
        cout<<hashArr[x]<<endl;
    }
    return 0;
}