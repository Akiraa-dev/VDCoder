/**
 *    author:  akira
 *    created: 23/01/2023 21:18:26
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

bool SNT(int x) {
    int cnt = 0;
    if(x < 2) return false;
    else if(x == 2) return true;
    else if(x == 3) return true;
    else {
        for(int i = 2; i <= sqrt(x); i++) {
            if(x % i == 0) {
                ++cnt;
            }
        }
    }
    if(cnt == 0) {
        return true;
    }
    else {
        return false;
    }
}
void solve() {
    int n; cin >> n;
    int tmp = 0;
    int a[n];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        if(SNT(a[i]) == true) {
            int pos = i; ++tmp;
            cout << pos << " " << a[i] << endl;
        }
    }
    if(tmp == 0) cout << "KHONG CO SO NGUYEN TO" << endl;

}

int main() {
    solve();
    return 0;
}