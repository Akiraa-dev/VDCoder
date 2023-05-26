/**
 *    author:  akira
 *    created: 26/05/2023 19:52:57
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string s; cin >> s;
    ll sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum += (s[i] - '0');
    }
    cout << sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}