/**
 *    author:  akira
 *    created: 26/05/2023 18:24:19
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll m, n; cin >> m >> n;
    int a[n];
    for(int i = 0; i < m ; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a, a + n);
        for(int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}