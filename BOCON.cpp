/**
 *    author:  akira
 *    created: 02/01/2023 19:56:08
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll sum = 0;
    if(a > b * 2) cout << a - b * 2;
    else cout << "0";
}

int main() {
    solve();
    return 0;
}