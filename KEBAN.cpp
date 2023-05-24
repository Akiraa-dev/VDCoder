/**
 *    author:  akira
 *    created: 02/01/2023 21:46:41
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll sum = -1;
    for(int i = a; i <= b; i *= 2) {
        ++sum;
    }
    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}
    