/**
 *    author:  akira
 *    created: 23/01/2023 22:36:19
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int k; cin >> k;
    for(int i = 1; i <= n; i++) {
        if(a[i] == k) {
            cout << i << endl;
            break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}