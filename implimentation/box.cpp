#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >>n>>q;
    vector<int>x(q);
    for (int i = 0; i < q; i++) {
        cin >> x[i];
    }

    vector<int> box(n + 1, 0); 
    vector<int> ans;
    for (int i = 0;i<q;i++) {
        if (x[i] >= 1) {
            box[x[i]]++;
            ans.push_back(x[i]);
        } else {
            int mini = INT_MAX, boxId = -1;
            for (int j= 1;j<= n;j++) {
                if (box[j]<mini) {
                    mini=box[j];
                    boxId = j;
         }
            }
            box[boxId]++;
            ans.push_back(boxId);
        }
    }
    for (int a : ans) 
    cout << a << " ";
    return 0;
}
