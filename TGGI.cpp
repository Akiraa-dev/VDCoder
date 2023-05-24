#include <bits/stdc++.h>
using namespace std;
int main() {
    double a, b, c; cin >> a >> b >> c;
    double a2 = a * a; a2 = roundf(a2 * 100000) / 100000;
    double b2 = b * b; b2 = roundf(b2 * 100000) / 100000;
    double c2 = c * c; c2 = roundf(c2 * 100000) / 100000;
    double ab2 = a2 + b2; ab2 = roundf(ab2 * 100000) / 100000;
    double bc2 = b2 + c2; bc2 = roundf(bc2 * 100000) / 100000;
    double ca2 = c2 + a2;ca2 = roundf(ca2 * 100000) / 100000;
    int tmp = 0;
    if((a + b > c) && (b + c > a) && (c + a > b)) { // KT xem co phai tam giac khong
        if (a == b) ++tmp; // tmp de KT xem tam giac can hay deu
        if (b == c) ++tmp;
        if (c == a) ++tmp;
        if (ab2 == c2 || bc2 == a2 || ca2 == b2) { // KT xem tam giac co vuong khong
            cout << "VUONG";
            if(tmp == 1) cout << " CAN";
        }
        else {
      	    if(tmp == 0) cout << "THUONG";
            else if(tmp == 1) cout << "CAN";
      	    else cout << "DEU";
      	}
    }
   else cout << "KHONGPHAITAMGIAC";
   return 0;
}
    