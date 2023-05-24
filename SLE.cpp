/**
 *    author:  akira
 *    created: 31/01/2023 20:12:06
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll sum = 0;
    for(int i = 1; i < n; i += 2) {
        sum += i;
        if(sum >= n) {
            cout << sum;
            break;
        }
    }
}

int main() {
    solve();
    return 0;
}