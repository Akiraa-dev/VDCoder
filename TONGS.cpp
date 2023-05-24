/**
 *    author:  akira
 *    created: 11/10/2022 19:17:34
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    long long n; cin >> n;
    double tmp = 1, sum = 1;
    for(int i = 2; i <= n; i++) {
        tmp = tmp / double(i);
        sum = sum + tmp;
    }
    cout << setprecision(10) << fixed << sum << endl;
    
}

int main() {
    solve();
    return 0;
}