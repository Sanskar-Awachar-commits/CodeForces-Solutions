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
        if (n % 2 != 0) {
            n--;
            cout << (n / 2) << '\n';
            continue;
        }
        cout << (n / 2) << '\n';
    }
    return 0;
}