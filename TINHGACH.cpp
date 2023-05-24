/**
 *    author:  akira
 *    created: 20/01/2023 16:33:24
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll x, y, z, t; cin >> x >> y >> z >> t;
    cout << ( (z * x * 2) + (y * z * 2) + (t - z) * y) * 39;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}