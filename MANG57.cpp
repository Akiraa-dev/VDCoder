/**
 *    author:  akira
 *    created: 23/01/2023 21:01:55
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    int res = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > 0 && a[i] % 5 == 0) ++res;
    }
    cout << res << endl;

}

int main() {
    solve();
    return 0;
}