/**
 *    author:  akira
 *    created: 23/01/2023 21:54:37
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) {
        cout << a[i] << " " << b[i] << " ";
    }
}

int main() {
    solve();
    return 0;
}