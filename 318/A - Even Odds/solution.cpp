#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n,k;
    cin >> n >> k;
    long long ans = 0;
    long long odd = (n+1)/2;
    if(k <= odd) ans = (2*k)-1;
    else ans=2*(k-odd);
    cout << ans;
    return 0;
}