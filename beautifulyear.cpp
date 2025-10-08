#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

    int x;
    cin >> x;

    while (true) {
        x = x + 1;
        int temp = x;
        int freq[10] = {0};
        bool isDistinct = true;

        for (int i = 0; i < 4; i++) {
            int digit = temp % 10;
            freq[digit]++;
            if (freq[digit] > 1) {
                isDistinct = false;
                break;
            }
            temp = temp / 10;
        }

        if (isDistinct) {
            cout << x << endl;
            break;
        }
    }

    return 0;
}
