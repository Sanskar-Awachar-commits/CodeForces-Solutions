#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np, x, y, z;
    while (cin >> n) {
        cin >> k >> l >> c >> d >> p >> nl >> np;
        x = (k * l) / nl;
        y = c * d;
        z = p / np;
        cout << min((min(x, y)), z) / n << endl;
    }
    return 0;
}