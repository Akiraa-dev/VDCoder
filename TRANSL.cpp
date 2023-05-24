/**
 *    author:  akira
 *    created: 06/07/2022 11:23:35
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int a; cin >> a;
    if(a == 2) cout << "Monday";
    else if(a == 3) cout << "Tuesday";
    else if(a == 4) cout << "Wednesday";
    else if(a == 5) cout << "Thursday";
    else if(a == 6) cout << "Friday";
    else if(a == 7) cout << "Saturday";
    else cout << "Sunday";
}

int main() {
    solve();
    return 0;
}