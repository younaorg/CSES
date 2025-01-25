#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for(int i=2; (n>=4) && (i<=n); cout << i << ' ', i+=2);
    for(int i=1; (n>=4) && (i<=n); cout << i << ' ', i+=2);
    cout << (n<4 && n>1 ? "NO SOLUTION" : "");
}
