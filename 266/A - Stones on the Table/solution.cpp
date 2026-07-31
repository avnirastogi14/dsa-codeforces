#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    int pos = 0, cnt = 0;
    for(int i=0;i<n-1;i++) if(s[i] == s[i+1]) cnt++;
    cout << cnt << endl;
    return 0;
}