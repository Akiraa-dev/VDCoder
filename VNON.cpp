/**
 *    author:  akira
 *    created: 04/07/2022 12:01:01
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

const ldb PI = 3.1415926535897932384626433832795;

void solve() {
    double h; cin >> h;
    double r; cin >> r;
    double a = 1.0 / 3 * (PI * r * r * h);
    cout << setprecision (8) << fixed << a;
}

int main() {
    solve();
    return 0;
}