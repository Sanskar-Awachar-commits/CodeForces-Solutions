#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bitset<101> b;
    int p, q;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int t;
        cin >> t;
        b.set(t);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        b.set(t);
    }
    bool output = true;
    for (int i = 1; i <= n; i++) {
        output = output & b.test(i);
    }
    if (output) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
    return 0;
}