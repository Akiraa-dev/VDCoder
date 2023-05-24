/**
 *    author:  akira
 *    created: 04/07/2022 11:07:41
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    double a; cin >> a;
    double b; cin >> b;
    double c; cin >> c;
    double x1, x2;
    double delta = b*b - 4*a*c;
    
    if(delta < 0) cout << "VO NGHIEM";
    else if(delta == 0) {
        x1 = x2 = -b / (2 * a);
        cout << "PT CO NGHIEM KEP" << endl;
        cout << "X = " << setprecision (2) << fixed << x1;
    }
    else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "PT CO HAI NGHIEM" << endl;
        cout << "X1 = " << setprecision (2) << fixed << x1 << endl;
        cout << "X2 = " << setprecision (2) << fixed << x2;

    }
}

int main() {
    solve();
    return 0;
}