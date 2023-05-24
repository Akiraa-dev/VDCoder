/**
 *    author:  akira
 *    created: 04/01/2023 21:38:30
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
   string s; getline(cin, s);
   stringstream ss(s);
   string x;
   while(ss >> x) {
      cout << x << " ";
   }
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}