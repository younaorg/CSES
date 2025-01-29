#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++) cin >> a[i].first, a[i].second = i+1;
    sort(a.begin(), a.end());

    for(int i=0; i<n-2; i++){
        for(int l=i+1, r= n-1; l<r; a[l].first+a[r].first < x-a[i].first ? l++ : r--) {
            if(a[l].first + a[r].first == x - a[i].first)
                return cout << a[i].second << " " << a[l].second << " " << a[r].second, 0;
        }
    }
    cout << "IMPOSSIBLE";
}
