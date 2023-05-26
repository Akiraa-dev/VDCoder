/**
 *    author:  akira
 *    created: 26/05/2023 19:44:59
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void solve() {
    string s; cin >> s;
    int a[26];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < s.size(); i++) {
        ++a[s[i] - 'A']; // Vi tri chu cai
    }
    for(int i = 0; i < 26; i++) {
        if(a[i] > 0) {
            char res = i + 'A'; // Chu cai
            cout << res << " " << a[i] << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}