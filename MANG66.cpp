/**
 *    author:  akira
 *    created: 26/05/2023 17:35:37
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll m, n; cin >> m >> n;
    int a[n];
    for(int i = 0; i < n; i++) a[i] = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            ll tmp; cin >> tmp;
            a[j] += tmp;
        }
    }
    for(int i = 0; i < n; i++) cout << a[i] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}