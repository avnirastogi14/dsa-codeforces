#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--) {
        int n;
        cin>>n;
        unordered_map<string,int> mp;
        int maxi = INT_MIN;
        string ans = "";
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp[s]++;
            if(maxi<mp[s])
            {
                maxi=mp[s];
                ans=s;
            }
        }
        cout<<ans;
    }
    return 0;
}