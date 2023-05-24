/**
 *    author:  akira
 *    created: 02/01/2023 20:25:29
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll tmp = 0;
    while(n > 0) {
        tmp += n % 10;
        n /= 10;
    }
    if(tmp % 10 == 9) cout << "YES";
    else cout << "NO";
}

int main() {
    solve();
    return 0;
}