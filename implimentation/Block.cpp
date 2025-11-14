#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int wi = 0, bi = 0;
    for (int i = 0; i < n; ++i)
    {
        if(s[i] == 'W')
            wi++;
        else
            bi++;
    }
    int ans = 0;
    vector <int> d;
    if(wi % 2 == 1 and bi % 2 == 1){
        cout << "-1" << endl;
        return 0;
    }
    
    else if(bi == 0 || wi == 0){
        cout << 0 << endl;
        return 0;
    }
    
    else if(wi % 2 == 0){
        for (int i = 0; i < n-1; ++i)
        {
           
            if(s[i] == 'W'){
                ans++;
                d.push_back(i+1);
                if(s[i+1] == 'W')
                s[i+1] = 'B';
            else
                s[i+1] = 'W';
            }
            
        }
    }
    else {
        for (int i = 0; i < n-1; ++i)
        {
            
            if(s[i] == 'B'){
                ans++;
            d.push_back(i+1);
            if(s[i+1] == 'B')
                s[i+1] = 'W';
            else
                s[i+1] = 'B';
        }
        }
    }
    cout << ans << endl;
    
    for(auto i : d )
        cout << i << " ";


    return 0;
}


