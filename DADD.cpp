/**
 *    author:  akira
 *    created: 22/10/2022 19:12:10
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    int minus = 0;
    int positive = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(a[i] < 0) ++minus;
        else ++positive;
    }
    cout << "SO DUONG: " << positive << endl;
    cout << "SO AM: " << minus << endl;
}

int main() {
    solve();
    return 0;
}