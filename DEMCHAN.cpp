/**
 *    author:  akira
 *    created: 01/01/2023 18:49:03
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll a; cin >> a;
    ll b; cin >> b;
    ll sum = 0;
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0 && i % 3 == 0) {
            ++sum;
            a = i;
            break;
        }
    }
    a += 6;
    cout << (sum + (b / 6)) - (a / 6) + 1;
}

int main() {
    solve();
    return 0;
}