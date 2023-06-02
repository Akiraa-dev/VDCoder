#include <bits/stdc++.h>
using namespace std;
int main() {
    long double h; cin >> h;
    long double ans = sqrt(2 * 9.8 * h);
    cout << setprecision(5) << fixed << ans;
    return 0;
}