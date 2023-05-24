/**
 *    author:  akira
 *    created: 04/07/2022 17:11:28
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

const ldb PI = 3.1415926535897932384626433832795;

void tinhtoan(double b, double a, double alpha) {
    double ED = (a - b) / 2.0000; // Canh ED
    double h = tan(alpha * PI / 180) * ED; // Đuong cao
    double AE = sqrt(h * h + ED * ED); // Pytago tinh AE
    double p = a + b + (AE * 2.0); // Chu vi (Ket qua)
    double area = (b * h) + (h * ED); // Dien tich (Ket qua)
    cout << setprecision (4) << fixed << p << endl;
    cout << setprecision (4) << fixed << area << endl;
}
void solve() {
    double b; cin >> b; // Đay be
    double a; cin >> a; // Đay lon
    double alpha; cin >> alpha; // Goc Alpha

    if(a > 0 && b < a && b > 0) {
        tinhtoan(b, a, alpha);
    }
}

int main() {
    solve();
    return 0;
}