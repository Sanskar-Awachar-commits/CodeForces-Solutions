#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x, len;
        cin >> x;
        len = to_string(x).length();
        cout << ((x % 10) - 1) * 10 + (len * (len + 1) / 2) << "\n";
    }
    return 0;
}