/**
 *    author:  akira
 *    created: 26/05/2023 18:44:16
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll m, n; cin >> m >> n;
    int a[m * n];
    for(int i = 0; i < n * m; i++) {
        cin >> a[i];
    }
    sort(a, a + m * n);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[j + n * i] << " ";
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