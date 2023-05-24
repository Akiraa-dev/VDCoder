/**
 *    author:  akira
 *    created: 08/01/2023 18:08:06
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    int a[n];
    int res = 0;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            ++res;
        }
    }
    cout << res;
}

int main() {
    solve();
    return 0;
}