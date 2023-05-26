/**
 *    author:  akira
 *    created: 26/05/2023 19:00:41
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

void chuanHoa(string &s) {
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}
void solve() {
    string s; getline(cin, s);
    stringstream ss(s);
    vector<string> str;
    string tmp;
    while(ss >> tmp) {
        str.push_back(tmp);
    }
    for(int i = 0; i < str.size(); i++) {
        chuanHoa(str[i]);
        cout << str[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}