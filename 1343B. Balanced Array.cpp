#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if ((n / 2) & 1) {
            cout << "NO\n";
            continue;
        }
        else {
            cout << "YES\n";
            for (int i = 1; i <= n / 2; i++) cout << i * 2 << ' ';
            for (int i = 1; i < n / 2; i++) cout << i * 2 - 1 << ' ';
        }
        cout << 2 * (n / 2) - 1 + (n / 2) << '\n';
    }
    return 0;
}