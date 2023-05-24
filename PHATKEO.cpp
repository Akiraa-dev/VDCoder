/**
 *    author:  akira
 *    created: 14/07/2022 20:26:10
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    ll sum = 0;
    ll tmp = 1;
    for(int i = 0; i < n; i++) {
        sum += tmp;
        tmp += 3;
    }
    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}