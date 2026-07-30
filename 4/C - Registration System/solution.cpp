#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    unordered_map<string,int> mp;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(mp.find(s) == mp.end()) {
            mp[s]=1;
            cout << "OK" << endl;
        }
    else
    {
        cout << s << mp[s] << endl;
        mp[s]++;
    }
}
return 0;
}