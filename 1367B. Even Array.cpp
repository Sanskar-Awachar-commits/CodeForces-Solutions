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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (a[i] % 2 == 1) odd++;
                else even++;
            }
        }
        if (odd == even) cout << odd << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}