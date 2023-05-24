/**
 *    author:  akira
 *    created: 06/07/2022 10:49:42
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    double a; cin >> a;
    double b; cin >> b;
        if(a == 0 && b == 0) cout << "VO SO NGHIEM";
        else if(a == 0 && b != 0) cout << "VO NGHIEM";
        else {
            double S = -b/a;
            cout << "PT CO NGHIEM\n" << "X = " << setprecision (2) << fixed << S << endl; 
        }
}
int main() {
    solve();
    return 0;
}