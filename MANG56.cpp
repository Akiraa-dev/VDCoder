/**
 *    author:  akira
 *    created: 08/01/2023 18:20:41
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    ll sum = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i < n; i += 2) {
        if(a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    cout << sum << endl;
}

int main() {
    solve();
    return 0;
}