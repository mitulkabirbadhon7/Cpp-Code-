#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n + 1);
    vector<int> arr2(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        int x = arr[i];
        arr2[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
