/**
 *    author:  akira
 *    created: 05/07/2022 15:16:11
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
int main() {
    ll n; cin >> n;
    ldb sum = 0;
    for(ll i = 0, tmp; i < n; i++) {
        cin >> tmp;
        if(tmp == 1) {
            sum += 1;
        }
        else {
            sum -= 1;
        }
    }
    cout << abs(sum) << endl;

    return 0;
}