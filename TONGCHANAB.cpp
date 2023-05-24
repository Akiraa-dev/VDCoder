/**
 *    author:  akira
 *    created: 07/07/2022 23:26:18
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll sum = 0;
    if(a % 2 == 0) {
        for (int i = a; i <= b; i += 2) {
            sum += i;
        }
        cout << sum;
    }
    else if(a % 2 == 1) {
        for (int i = a + 1; i <= b; i += 2) {
            sum += i;
        }
        cout << sum;
    }
        
}

int main() {
    solve();
    return 0;
}