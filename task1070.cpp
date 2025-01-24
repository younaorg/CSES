#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int n; cin >> n; n < 4 && n > 1 ? cout << "NO SOLUTION" : 0) 
        for (int i = 2; i <= n; cout << i << ' ', i += 2);
        for (int i = 1; i <= n; cout << i << ' ', i += 2);
}
