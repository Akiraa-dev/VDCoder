/**
 *    author:  akira
 *    created: 04/01/2023 20:36:01
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string s;
    getline(cin ,s);
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}