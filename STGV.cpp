/**
 *    author:  akira
 *    created: 04/07/2022 19:10:23
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    long double a; cin >> a;
    long double b; cin >> b;
    if(a > 0 && b > 0) {
        double area = (a * b) / 2;
        cout << setprecision (2) << fixed << area;
    }
}

int main() {
    solve();
    return 0;
}