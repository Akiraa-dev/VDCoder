/**
 *    author:  akira
 *    created: 22/10/2022 15:12:10
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll n; cin >> n;
	ll sum = 0;
	for(int i = 1; i < n; i++) {
		if(n % i == 0) {
			sum += i;
		}
	}
	if(sum == n) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}