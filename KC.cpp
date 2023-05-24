/**
 *    author:  akira
 *    created: 05/07/2022 18:59:13
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int t; cin >> t;
    int velocity_xd = 10; // Van toc xe dap
    int velocity_xm = 30; // Van toc xe may

    int distance_xd = velocity_xd * t; // Quang duong xe dap
    int distance_xm = velocity_xm * t; // Quang duong xe may

    cout << abs(distance_xd - distance_xm);
}

int main() {
    solve();
    return 0;
}