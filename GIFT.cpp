/**
 *    author:  akira
 *    created: 27/05/2023 17:34:25
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;

using namespace std;

void solve() {
    ull x, y, u, v, t;
    ull tc; cin >> tc;
    while(tc--) {
        cin >> x >> y >> u >> v >> t;
        if(u < v) {
            swap(x, y);
            swap(u, v);
        }
        if(u > v + t) cout << x * (v + t) + y * v;
        else cout << x * u + y * v;
        cout << endl; 
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}