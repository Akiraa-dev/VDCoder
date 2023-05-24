/**
 *    author:  akira
 *    created: 18.02.2023 21:46:00
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
   ll a, b, h;
   cin >> a >> b >> h;
   ll sum = a * b * h;
   cout << sum * 1000;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0); cout.tie(0);
   solve();
   return 0;
}