/**
 *    author:  akira
 *    created: 23/01/2023 21:05:24
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n, m, pos; cin >> n >> m;
    bool tmp = false;
    int a[n];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        tmp = a[i] == m ? true : false;
        pos = tmp == true ? i : 0;
        if(tmp == true) break;
    }
    if(tmp == true && pos != 0) {
        cout << "CO K O VI TRI " << pos << endl;
    } else {
        cout << "KHONG CO K" << endl;
    }
}

int main() {
    solve();
    return 0;
}