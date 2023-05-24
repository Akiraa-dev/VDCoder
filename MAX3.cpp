/**
 *    author:  akira
 *    created: 05/07/2022 18:59:13
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll a; cin >> a;
	ll b; cin >> b;
	ll c; cin >> c;
	if(a > b && a > c) cout << "So lon nhat: " << a;
	else if(b > a && b > c) cout << "So lon nhat: " << b;
	else cout << "So lon nhat: " << c;
	return 0;
}