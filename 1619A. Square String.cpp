#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() % 2) cout << "NO\n";
        else {
            bool output = true;
            for (int i = 0; i < s.size() / 2; i++) {
                int id = (s.size() / 2) + i;
                if (s[i] != s[id]) {
                    output = false;
                    break;
                }
            }
            if (output) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}