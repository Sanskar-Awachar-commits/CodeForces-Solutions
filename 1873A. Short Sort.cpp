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
        if (s == "abc" || s == "bac" || s == "acb" || s == "cba")
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}