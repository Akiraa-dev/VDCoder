/**
 *    author:  akira
 *    created: 27/05/2023 17:28:15
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll x, y, z; cin >> x >> y >> z;
    cout << (x * 1000 - z) / (y + z);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}