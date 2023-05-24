/**
 *    author:  akira
 *    created: 04/07/2022 16:10:47
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    double num;
    double sum = 0;
    for(int i = 0; i < 4; i++) {
        cin >> num;
        sum += num;
    }
    sum /= 4;
    cout << setprecision (2) << fixed << sum;
}

int main() {
    solve();
    return 0;
}