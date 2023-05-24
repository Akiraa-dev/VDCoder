/**
 *    author:  akira
 *    created: 22/01/2023 13:43:03
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ldb n, m; cin >> n >> m;
    ll tmp = 0;
    while(n < m) {
        n = round(n + (n * 0.1));
        ++tmp;
    }
    cout << tmp << endl;
}

int main() {
    solve();
    return 0;
}
    