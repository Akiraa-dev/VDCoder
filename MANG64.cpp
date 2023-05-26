/**
 *    author:  akira
 *    created: 26/05/2023 17:20:56
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll tmp = 2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << j + tmp << " ";
        }
        ++tmp;
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}