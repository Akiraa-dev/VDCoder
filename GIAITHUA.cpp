/**
 *    author:  akira
 *    created: 04/07/2022 14:37:10
**/
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ll n; cin >> n;
    ll giaithua = 1;
    if (n > 0 && n < 20) {
        for(int i = 1; i <= n; i++)
        {
            giaithua *= i;
        }
    }
    cout << giaithua << endl;
    
    return 0;
}
    