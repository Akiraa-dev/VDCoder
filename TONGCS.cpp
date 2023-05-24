/**
 *    author:  akira
 *    created: 04/07/2022 16:23:41
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
}

int main() {
    solve();
    return 0;
}