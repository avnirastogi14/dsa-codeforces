#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int cnt = 1;
    int maxi = 1;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else cnt = 1;
    }
    cout<<maxi;
    return 0;
}