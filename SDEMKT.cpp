/**
 *    author:  akira
 *    created: 04/01/2023 20:54:51
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

int cnt[10];

void solve() {
   string s; getline(cin, s);
   int tmp = 0;
   for(int i = 0; i < s.length(); i++) {
      if(s[i] >= '0' && s[i] <= '9') ++tmp;
   }
   cout << tmp << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}