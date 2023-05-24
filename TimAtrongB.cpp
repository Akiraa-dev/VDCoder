/**
 *    author:  akira
 *    created: 14/02/2023 16:59:49
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

ll n;
vector<ll> a, b;
bool check(ll x) {
    ll l = 0;
    ll r = n - 1;
    ll m;
    while(l <= r) {
        m = (l + r) / 2;
        if(b[m] == x) {
            return true;
        }
        else {
            if(b[m] > x) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
    }
    return false;
}
void solve() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) {
        if(check(a[i])) ++sum;
    }
    cout << sum << endl;
}
int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("TimAtrongB.INP", "r", stdin);
    // freopen("TimAtrongB.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
