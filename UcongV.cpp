/**
 *    author:  akira
 *    created: 24/05/2023 16:09:48
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    if(a > 1) cout << 1 << " " << a - 1;
    else cout << 0 << " " << 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}