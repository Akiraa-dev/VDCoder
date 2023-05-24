/**
 *    author:  akira
 *    created: 07/07/2022 22:13:00
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll x, y; cin >> x >> y; // Toa do A
    ll u, v; cin >> u >> v; // Toa do B
    ll A = sqrt(x*x + y*y);
    ll B = sqrt(u*u + v*v);
    if (A == B) cout << "BANG NHAU";
    else if (A < B) cout << "A";
    else cout << "B";

}

int main() {
    solve();
    return 0;
}