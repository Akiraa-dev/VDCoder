/**
 *    author:  akira
 *    created: 23/01/2023 23:38:42
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n], b[n], c[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }
    for(int i = 0; i < n; i++) {
        sum += b[i] - a[i];
        c[i] = sum;
    }
    int tmp = c[0];
    for(int i = 0; i < n; i++) {
        if(c[i] > tmp) {
            tmp = c[i];
        }
    }
    cout << tmp << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
