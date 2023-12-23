#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    while (n--) {
        int x;
        cin >> x;
        if (x&1)
            sum += x;
    }
    cout << sum;
    return 0;
}
