/**
 *    author:  akira
 *    created: 23/08/2022 17:24:28
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

int cnt[10];
void solve() {
    string a; getline(cin, a);
    int sum = 0;
    for(int i = 0; i < a.size(); i++){
        sum += a[i] - '0';
    }
    bool check;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0'){
            check = true;
        }
    }
    for(int i = 0; i < a.size(); i++){
        cnt[a[i] - 48]++;
    }
    if(sum % 3 == 0 && check == 1){
        for(int i = 9; i >= 0; i--){
            if(cnt[i] != 0){
                for(int j = 0; j < cnt[i]; j++){
                    cout << i;
                }
            }
        }
    }
    else{
        cout << "-1";
    }
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("4_1.INP", "r", stdin);
    // freopen("4_1.OUT", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}