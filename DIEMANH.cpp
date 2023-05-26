/**
 *    author:  akira
 *    created: 11/02/2023 20:26:58
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

ll cnt[10000001];

void solve() {
    ll n; cin >> n;
    ll a[n];
    memset(cnt, sizeof(cnt), 0);
    for(int i = 1; i <= n; i++) {
        cin >> a[i]; ++cnt[a[i]];
    }
    sort(cnt, cnt + n + 1);
    cout << cnt[n] << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}