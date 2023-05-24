/**
 *    author:  akira
 *    created: 23/01/2023 23:09:51
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;
void solve() {
    int n; cin >> n;
    ll sum = 0;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        sum += (max - a[i]);
    }
    cout << sum << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}