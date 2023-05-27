/**
 *    author:  akira
 *    created: 27/05/2023 15:45:35
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string a; getline(cin, a);
    string b; getline(cin, b);
    if(a.size() < b.size()) cout << b;
    else cout << a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}