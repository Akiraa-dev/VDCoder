/**
 *    author:  akira
 *    created: 04/01/2023 20:44:12
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string a; getline(cin, a);
    string b; getline(cin, b);
    int cnta = 0; int cntb = 0;
    for(int i = 0; i < a.length(); i++) {
      ++cnta;
    }
    for(int i = 0; i < b.length(); i++) {
      ++cntb;
    }
    
   if(cnta > cntb) cout << cnta;
   else cout << cntb;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}