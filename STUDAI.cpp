/**
 *    author:  akira
 *    created: 26/05/2023 19:36:28
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string s;
    string max = "";
    while(cin >> s) {
        if(s.size() > max.size()) max = s;
    }
    cout << max << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}