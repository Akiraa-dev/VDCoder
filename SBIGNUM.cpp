/**
 *    author:  akira
 *    created: 26/05/2023 19:55:29
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string a, b; cin >> a >> b;
    ll carry = 0, tmp;
    for(int i = 0; i < max(a.size(), b.size()); i++) {
        if(a.size() == b.size()) break;
        a = a.size() < b.size() ? '0' + a : a;
        b = b.size() < a.size() ? '0' + b : b;
    }
    for(int i = a.size() - 1; i >= 0; i--) {
        tmp = a[i] - '0' + b[i] - '0' + carry;
        carry = tmp / 10;
        a[i] = (tmp % 10) + '0';
    }
    a = carry == 1 ? '1' + a : a;
    cout << a << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}