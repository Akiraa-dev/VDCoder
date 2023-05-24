/**
 *    author:  akira
 *    created: 24/02/2023 16:21:43
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n, k; cin >> n >> k;
    ll sum = 0;
    ll tmp = k;
    for(int i = 1; i <= tmp; i += 3) {
        ++sum;
        tmp -= i;
    }
    if(sum >= n) cout << n << endl;
    else cout << sum << endl;
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("PHATKEO2.INP", "r", stdin);
    // freopen("PHATKEO2.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}