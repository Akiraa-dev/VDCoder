/**
 *    author:  akira
 *    created: 04/07/2022 14:16:33
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll c; cin >> c;
    if(a < b && b < c) {
        if(c - b == b - a) {
            cout << a + b + c;
        }
        else {
            cout << "KHONG PHAI CAP SO CONG";
        }
    }
}

int main() {
    solve();
    return 0;
}