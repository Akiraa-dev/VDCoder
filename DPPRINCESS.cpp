/**
 *    author:  akira
 *    created: 25/11/2022 16:53:06
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll dp[n + 1], x[n + 1];
        for(int i = 1; i <= n; i++) cin >> x[i];
        dp[0] = 0;
        if(n > 0) {
            dp[1] = x[1];
        }
        ll res = 0;
        for(int i = 2; i <= n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + x[i]);
        }
        cout << dp[n] << endl;
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("DPPRINCESS.INP", "r", stdin);
    // freopen("DPPRINCESS.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}