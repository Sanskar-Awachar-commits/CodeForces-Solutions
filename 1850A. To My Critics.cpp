#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) > 9 || (a + c) > 9 || (b + c) > 9) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}