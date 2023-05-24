/**
 *    author:  akira
 *    created: 09/07/2022 15:16:08s
**/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b; cin >> a >> b;
    long long dividend = a >= b ? a : b;
    long long divisor = a <= b ? a : b;
    while (divisor != 0) {
        long long remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    cout << a / dividend * b << endl;
    return 0;
}
    