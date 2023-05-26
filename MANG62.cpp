/**
 *    author:  akira
 *    created: 26/05/2023 17:11:28
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    for(int i = 0; i < n; i++) {
        ll max = 0;
        for(int j = 0; j < n; j++) {
            ll tmp; cin >> tmp;
            max = tmp > max ? tmp : max;
        }
        cout << max << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}