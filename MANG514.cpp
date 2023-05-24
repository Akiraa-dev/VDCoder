/**
 *    author:  akira
 *    created: 23/01/2023 22:30:22
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll min_pos = 0;
    ll max_pos = 0;
    ll a[n];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll minn = a[0];
    for(ll x = 1; x < n; x++) {
        if(a[x] < minn) {
            minn = a[x];
            min_pos = x;
        }
    }
    ll maxx = a[0];
    for(ll y = 1; y < n; y++) {
        if(a[y] > maxx) {
            maxx = a[y];
            max_pos = y;
        }
    }
    swap(a[min_pos], a[max_pos]);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}