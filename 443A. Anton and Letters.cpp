#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    bitset<26> b;
    for (int i = 0; i < s.size(); i++) {
        int t = s[i];
        if (t > 96 && t < 123) {
            b.set(t - 97);
        }
    }
    cout << b.count();
    return 0;
}