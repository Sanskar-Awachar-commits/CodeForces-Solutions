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
        int prev = 0;
        bool sorted = true;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (prev > x) {
                sorted = false;
            }
            prev = x;
        }
        bool output;
        if (sorted || k > 1) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}