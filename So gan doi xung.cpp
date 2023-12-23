#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(string& s) {
    int r = s.size()-1, l = 0;
    while (l <= r) {
        if (s[l] != s[r])
            return false;
        else
            ++l;--r;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    
    int cnt = 0;
    for (int i = s.size()-1; i >= 0; i--) {
        if (s[i]-'0' == 0)
            ++cnt;
        else
            break;
    }
    
    int a = s.size()-cnt;
    
    if (check(s) || check(s.erase(a, s.size()-a)))
        cout << "YES\n";
    else
        cout << "NO\n";
    
    return 0;
}
