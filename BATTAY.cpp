/**
 *    author:  akira
 *    created: 19/02/2023 10:15:04
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    n *= 30;
    cout << n * (n - 1) / 2;
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("BATTAY.INP", "r", stdin);
    // freopen("BATTAY.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}