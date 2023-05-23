/**
 *    author:  akira
 *    created: 04/07/2022 19:19:34
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    long long a; cin >> a;
    long long b; cin >> b;
    long long c; cin >> c;
    long long d; cin >> d;
    long long x; cin >> x;
    long long sum = (a*x*x*x) + (b*x*x) + (c*x) + d;
    cout << sum;
}

int main() {
    solve();
    return 0;
}