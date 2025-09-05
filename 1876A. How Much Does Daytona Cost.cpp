#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a;
        bool found = false;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == k && !found) {
                cout << "YES" << '\n';
                found = true;
            }
        }
        if (!found) cout << "NO" << '\n';
    }
    return 0;
}