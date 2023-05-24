/**
 *    author:  akira
 *    created: 02/02/2023 21:19:05
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll cnt = n;
    while(n > 9) {
        cnt = cnt + n / 10 * 3; //31 
        n = n / 10 * 3 + n % 10; //11
    }
    cout << cnt << endl;
}

int main() {
    solve();
    return 0;
}