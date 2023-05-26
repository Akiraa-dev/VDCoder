/**
 *    author:  akira
 *    created: 24/05/2023 21:47:57
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
	ll n, m = 0, ans = 0;
	vector<ll> v;
	while(cin >> n) {
		v.push_back(n);
		m = max(m, n); // Tim max
	}
	for(int i = 0; i < v.size(); i++) {
		ans += (m - v[i]);
	}
	cout << ans << endl;
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("MEOAN.INP", "r", stdin);
	// freopen("MEOAN.OUT", "w", stdout);
	// #endif
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve();
	return 0;
}