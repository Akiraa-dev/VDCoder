/**
 *    author:  akira
 *    created: 04/07/2022 13:07:42
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

ldb PI = 3.1415926535897932384626433832795;

void solve() {
    double r; cin >> r;
    double area = PI * r * r;
    cout << setprecision(0) << fixed << area << endl;
}

int main() {
    solve();
    return 0;
}