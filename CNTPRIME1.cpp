/**
 *    author:  akira
 *    created: 28/05/2023 12:34:54
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

const ldb PI = 3.1415926535897932384626433832795;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

int prime[1000000];
int check[1000000];
void sieve() {
    for(int i = 2; i * i <= 1e6; i++) {
        if(!check[i]) {
            for(int j = i * i; j <= 1e6; j += i) {
                check[j] = 1;
            }
        }
    }
    for(int i = 2; i <= 1e6; i++) {
        prime[i] = prime[i - 1];
        if(!check[i]) ++prime[i];
    }
}
void solve() {
    ll t; cin >> t;
    sieve();
    while(t--) {
        ll l, r; cin >> l >> r;
        cout << prime[r] - prime[l - 1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}

/**
*   ⣶⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣾⣿⣿⣿⣷⣦⠀⠀
*   ⣿⣿⣿⣿⣿⣗⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⡿⠛⣝⣿⣿⡷⡀⠀
*   ⣿⡟⠁⡉⠙⠻⣿⣿⣦⣤⣤⣶⣶⣶⣶⣶⣾⣿⣿⡿⠋⠀⠌⡐⠈⣿⣿⣧⠀⠀
*   ⣿⠀⢂⠐⡁⢂⣬⣿⣿⣿⠟⠋⠀⠀⠀⠀⠉⠿⣿⣿⣿⣿⣶⣶⣤⣈⣿⣿⣗⠀
*   ⡇⢀⣦⣼⣾⣿⣿⣿⡿⡃⠌⠀⠀⠀⠀⠀⠀⠀⠑⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀ uwu ♥
*   ⣿⣿⣿⣿⣿⣿⣟⢯⢃⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⢎⠳⣯⣟⣿⣿⣿⣿⣷
*   ⣿⣿⣿⣿⡿⡓⢎⠂⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⣰⣬⣧⡝⢊⢹⣿
*   ⣿⣯⠟⠥⠃⢉⠀⣴⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⣿⠀⠸⣻
*   ⡏⠄⡈⠤⣁⠢⡀⢿⣿⣿⣿⠇⠀⠀⠀⠀⣤⡄⠀⣶⠀⠀⡙⢛⢛⡛⠭⢸⣿⣿
*   ⠐⡠⢑⡒⡄⠓⡌⣌⢩⣩⠷⠶⣤⠀⠀⠀⠻⣷⡾⠃⢀⢸⡼⠋⠛⢿⣦⣻⣿⡧
*   ⢀⠱⡈⢖⡈⢣⠜⣠⡟⠁⠀⠀⠀⢳⡄⠀⠀⠀⠀⠀⠐⣾⠃⠀⠀⠀⠈⢿⣯⣿
*   ⣦⠠⢑⠢⣉⠆⢼⡟⠀⠀⠀⠀⠀⢸⣷⠀⠀⠀⠀⠀⣸⡇⠀⠀⠀⠀⠀⠈⣿⣿
*   ⡟⠀⠀⢁⠂⣼⡟⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⣾⣷⠀⠀⠀⠀⠀⠀⠈⢿
*   ⠀⠀⠀⠀⣴⠏⠀⠀⠀⠀⠀⠀⠀⢠⣿⠀⠀⠀⠀⠀⢸⣿⡅⠀⠀⠀⠀⠀⠀⠀
*   ⠀⠀⠀⠈⠁⠀⠀⠀⠀⠀⠀⠀⢠⣾⡇⠀⠀⠀⠀⠀⠀⢿⣷⠀⠀⠀⠀⠀⠀⠀
**/