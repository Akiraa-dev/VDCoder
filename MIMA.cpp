/**
 *    author:  akira
 *    created: 29/10/2022 19:05:14
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "SO LON NHAT: " << a[n - 1] << endl;
    cout << "SO BE NHAT: " << a[0] << endl;
}

int main() {
    solve();
    return 0;
}