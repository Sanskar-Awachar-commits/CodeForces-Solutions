#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> b;
        a += b[0];
        for (int i = 1; i < b.size() - 1;) {
            if (b[i] == b[i + 1]) {
                a += b[i];
                i += 2;
            }
        }
        a += b[b.size() - 1];
        cout << a << '\n';
    }
    return 0;
}