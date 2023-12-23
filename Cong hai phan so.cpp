#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct PhanSo {
    long long tu, mau;
};

int main() {
    
    PhanSo a, b;
    cin >> a.tu >> a.mau >> b.tu >> b.mau;
    
    PhanSo ans;
    ans.tu = a.tu*b.mau + b.tu*a.mau;
    ans.mau = a.mau*b.mau;
    
    long long res = __gcd(ans.tu, ans.mau);
    ans.tu /= res;
    ans.mau /= res;
    
    if (ans.mau < 0) {
        ans.mau *= -1;
        ans.tu *= -1;
    }
    cout << ans.tu << " " << ans.mau;
    
    return 0;
}
