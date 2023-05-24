/**
 *    author:  akira
 *    created: 20/01/2023 10:34:06
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int cnt = 0;
    for(int i = 0, tmp; i < n * m; i++) {
        cin >> tmp;
        if(tmp % 3 == 0) {
            ++cnt;
        }
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}