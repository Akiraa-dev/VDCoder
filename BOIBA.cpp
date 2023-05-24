/**
 *    author:  akira
 *    created: 04/07/2022 15:16:11
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	ll a; cin >> a;
	ll b; cin >> b;
	ll sum = 0;
	
	for(int i = a; i <= b; i++) {
		if(i % 3 == 0) {
			sum += 1;
		}
	}	
	cout << sum;
	
	return 0;
}