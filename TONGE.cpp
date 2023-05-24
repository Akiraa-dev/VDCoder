/**
 *    author:  akira
 *    created: 06/07/2022 16:22:41
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
    double n; cin >> n;
    double e = 1.0;
    int i = 2;
    while(e <= n) {
        e += 1/pow(i, 2);
        i++;
    }
    cout << setprecision(9) << fixed << e << endl;
    return 0;
}
    