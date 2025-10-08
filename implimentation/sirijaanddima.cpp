#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    int s = 0, d = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0;
    int j = n - 1;
    int count = 1;

    while (i <= j) {
        int pick;
        if (arr[i] > arr[j]) {
            pick = arr[i];
            i++;
        } else {
            pick = arr[j];
            j--;
        }

        if (count % 2 != 0) {
            s += pick; 
        } else {
            d += pick; 
        }

        count++;
    }

    cout << s << " " << d << endl;
    return 0;
}
