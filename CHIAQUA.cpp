/**
 *    author:  akira
 *    created: 11/02/2023 20:50:35
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll x; cin >> x;
    ll y; cin >> y;
    ll cnt = 0;
    for(int i = 1; i <= sqrt(x); i++) {
        ll tmp = x / i;
        if(x % i == 0 && y % i == 0) ++cnt;
        if(x % tmp == 0 && y % tmp == 0 && tmp != i) ++cnt;
    }
    cout << cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
    