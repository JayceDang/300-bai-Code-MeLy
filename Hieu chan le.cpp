#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long ans = 0;
    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;
        if (i&1)
            ans -= x;
        else
            ans += x;
    }
    cout << ans;
    return 0;
}
