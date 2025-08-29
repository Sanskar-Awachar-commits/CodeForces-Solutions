#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, p;
    cin >> a >> b;
    int x = 7 - max(a, b);
    int r = __gcd(x, 6);
    cout << x / r << "/" << 6 / r << endl;
    return 0;
}