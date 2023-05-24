/**
 *    author:  akira
 *    created: 24/01/2023 16:55:00
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    int a, b, c; cin >> a >> b >> c;
	if(a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b){
		cout << "Ba so da nhap la bo so Pi-ta-go" << endl;
	}
	else {
		cout << "Ba so da nhap khong la bo so Pi-ta-go" << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}