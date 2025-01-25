#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int res, c = 1;
    for (int i=1; i<s.size(); i++) 
        res = max(res, c = (s[i] == s[i-1] ? c+1 : 1));
    cout << res << endl;
}
