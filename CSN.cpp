/**
 *    author:  akira
 *    created: 04/07/2022 14:37:10
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll c; cin >> c;
    bool ok = false;
    if(c % b == 0 && b % a == 0) {
        if(c / b == b / a) {
            ok = true;
        }
    }
    if(ok ==  true) cout << "YES";
    else cout << "NO";
}

int main() {
    solve();
    return 0;
}