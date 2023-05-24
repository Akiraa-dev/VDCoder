/**
 *    author:  akira
 *    created: 04/07/2022 13:27:36
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int a; cin >> a; // Loai 1
    int b; cin >> b; // Loai 2
    int c; cin >> c; // Loai 3
    int m; cin >> m; // m con loai 1
    int n; cin >> n; // Tong con gia cam
    int k; cin >> k; // k con loai 2
    ll sum = (m * a) + (k * b) + ((n - m - k) * c);
    cout << sum;
}

int main() {
    solve();
    return 0;
}