/**
 *    author:  akira
 *    created: 04/07/2022 13:58:39
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll x; cin >> x;
    ll y; cin >> y;
    ll z; cin >> z;
    if(x == y || y == z || x == z) cout << "LA TAM GIAC CAN";
    else cout << "KHONG PHAI TAM GIAC CAN";
}

int main() {
    solve();
    return 0;
}