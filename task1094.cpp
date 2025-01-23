#include <bits/stdc++.h>
using namespace std;

int main(){
	long long c=0, n; cin >> n;
	vector<long long> v;
	for(int i=0; i<n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	for(int i=1; i<n; i++){
		if(v[i]<v[i-1]){
			int d = abs(v[i]-v[i-1]);
			c += d;
			v[i] += d;
		}
	}
	cout << c << endl;
	return 0;
}
