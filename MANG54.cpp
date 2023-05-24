/**
 *    author:  akira
 *    created: 08/01/2023 18:02:33
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll max; cin >> max;
    int res = 1;
    for(int i = 2; i <= n; i++) {
        int tmp; cin >> tmp;
        if(tmp > max) {
            max = tmp; res = i;
        }
    }
    cout << max << " " << res;
}

int main() {
    solve();
    return 0;
}
    