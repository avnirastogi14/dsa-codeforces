#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin>>s;
    vector<int> num;
    for(char c:s) if(isdigit(c)) num.push_back(c-'0');
    sort(num.begin(),num.end());
    int pos = 0;
    for(char &c:s) if(isdigit(c)) c=(num[pos++]+'0');
    cout<<s;
    return 0;
}