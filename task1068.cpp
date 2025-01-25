#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; 
    for(; cout << n << "\n", n!=1; n = n%2 ? 3*n+1 : n/2);
}
