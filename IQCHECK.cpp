/**
 *    author:  akira
 *    created: 12/02/2023 19:46:02
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n];
    
    int even = 0;
    int odd = 0;

    int even_pos = 0;
    int odd_pos = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            ++even; even_pos = i;
        }
        else {
            ++odd; odd_pos = i;
        }
    }
    if(even < odd) {
        cout << a[even_pos];
    } else {
        cout << a[odd_pos];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}