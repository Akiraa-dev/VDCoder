/**
 *    author:  akira
 *    created: 04/01/2023 20:38:18
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string s;
    getline(cin, s);
    int cnt = 0;
    for(int i = s.length() - 1; i >= 0; i--) {
      if(s[i] == 'A') {
         ++cnt;
      }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}