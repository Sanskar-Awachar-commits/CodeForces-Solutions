#include <iostream>
using namespace std;
int main() {
    long long t;
    long long l, r;
    cin >> t;
    while (t--) {
        long long x = 0, y = 0;
        cin >> l >> r;
        if (l * 2 <= r) {
            x = l;
            y = l * 2;
        }
        else {
            x = -1;
            y = -1;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}