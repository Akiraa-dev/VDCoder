/**
 *    author:  akira
 *    created: 31/01/2023 20:31:52
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    long long a; cin >> a;
    long long x; cin >> x;
    double tmp = a;
    long long month = 0;
    while(tmp < x) {
        tmp = tmp + tmp * 0.011;
        ++month;
    }
    cout << month << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("TKNH.INP", "r", stdin);
    freopen("TKNH.OUT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
    