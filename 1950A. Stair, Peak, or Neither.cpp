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
        if (a < b) {
            if (b < c) cout << "STAIR";
            else if (b == c) cout << "NONE";
            else cout << "PEAK";
        }
        else cout << "NONE";
        cout << '\n';
    }
    return 0;
}