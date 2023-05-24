/**
 *    author:  akira
 *    created: 19/09/2022 18:59:51
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a, b, c; cin >> a >> b >> c;
    ll tmp = abs(a - c);
    ll tmp1 = abs(b - c);
    if(tmp < tmp1) {
        cout << "Cat_A";
    }
    else if(tmp > tmp1) {
        cout << "Cat_B";
    }
    else cout << "Mouse_C";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}