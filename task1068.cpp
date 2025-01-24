#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int n; cin >> n; cout << n << " \n"[n == 1], n = n % 2 ? n * 3 + 1 : n / 2);
}
