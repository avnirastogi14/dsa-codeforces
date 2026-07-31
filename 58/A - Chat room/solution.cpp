#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string x = "hello";
    int pos = 0;
 
    for (char c : s)
    {
        if (pos < x.size() && c == x[pos])
        pos++;
    }
 
    cout << (pos == x.size() ? "YES" : "NO");
}