/**
 *    author:  akira
 *    created: 26/05/2023 17:25:00
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll sum = 0;
    ll tmp; cin >> tmp;
    sum += tmp;
    for(int i = 1; i < n; i++) {

        for(int j = 0; j < n; j++) {
            cin >> tmp;    
        }
        cin >> tmp;
        sum += tmp;
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}