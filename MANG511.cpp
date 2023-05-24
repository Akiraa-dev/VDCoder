/**
 *    author:  akira
 *    created: 23/01/2023 21:32:44
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll cnt = 0;
    ldb a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(a[0] < a[1]) ++cnt;
    if(a[n - 1] < a[n - 2]) ++cnt;
    for(ll i = 1 ; i < n; i++) {
        if(a[i] < a[i - 1] && a[i] < a[i + 1]) {
            ++cnt;
        }
    }
    cout << cnt << endl;
}

int main() {
    solve();
    return 0;
}