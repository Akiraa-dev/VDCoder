/**
 *    author:  akỉa
 *    created: 08/07/2022 23:21:54
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}