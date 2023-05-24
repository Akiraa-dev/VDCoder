/**
 *    author:  akira
 *    created: 09/01/2023 08:55:22
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    double a , b , k ,t;
    cin >> a >> b >> k >> t;
    double chieucaonuoc = (t * 3) / (a * b);
    double chieucaonguoi = k / 100;
    if(chieucaonuoc <= chieucaonguoi){
        cout << "YES";
    }
    else{
        cout << "WARNING";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}