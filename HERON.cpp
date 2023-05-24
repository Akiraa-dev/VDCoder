/**
 *    author:  akira
 *    created: 04/07/2022 15:47:10
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int a; cin >> a;
    int b; cin >> b;
    int c; cin >> c;
    double p = (a + b + c) / 2.0; // Nua chu vi
    double heron = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << setprecision (2) << fixed << heron << endl;
}

int main() {
    solve();
    return 0;
}