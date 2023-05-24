/**
 *    author:  akira
 *    created: 02/01/2023 22:01:24
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

long long tinhtoan(ll n) { // Hàm tính tổng chữ số
    ll tmp = 0;
    while(n > 0) {
        tmp = tmp + n % 10;
        n /= 10;
    }
    return tmp;
}
void solve() {
    ll n; cin >> n;
    if(n % tinhtoan(n) == 0) cout << 1;
    else cout << 0;
}

int main() {
    solve();
    return 0;
}
    