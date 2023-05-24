/**
 *    author:  akira
 *    created: 04/07/2022 14:03:18
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll c; cin >> c;
    if(a > 0) {
        a *= a * a; cout << a << " ";
    }
    else {
        a *= a; cout << a << " ";
    }
    if(b > 0) {
        b *= b * b; cout << b << " ";
    }
    else {
        b *= b; cout << b << " ";
    }
    if(c > 0) {
        c *= c * c; cout << c << " ";
    }
    else {
        c *= c; cout << c << " ";
    }

}

int main() {
    solve();
    return 0;
}