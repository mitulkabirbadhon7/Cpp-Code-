#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int a,b;
        int year = stoi(s);

        int root = sqrt(year);
        int part1 = root / 2;
       int part2 = root - part1;
       int sum = part1 + part2;

        if(sum * sum == year){
        	cout<<a<<" "<<b<<endl;
        }
        else {
        	cout<<(-1)<<endl;
        }
    }

    return 0;
}
