/**
 *    author:  akira
 *    created: 14/07/2022 12:08:24
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    if(n % 2 == 0) {
        ll sum = (n * n) / 4;
        cout << sum << endl;
    }
    else {
        --n;
        ll sum = (n * n) / 4;
        cout << sum << endl;
    }
}

int main() {
    solve();
    return 0;
}