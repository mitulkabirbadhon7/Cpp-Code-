#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        int arr[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int left = arr[0];
        int right = arr[n - 1];

        int dist1 = abs(s - left) + (right - left);
        int dist2 = abs(s - right) + (right - left);

        cout << min(dist1, dist2) <<endl;
    }

    return 0;
}
