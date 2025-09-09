#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        int j = n - 1;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] == s[j - i]) break;
            else c += 2;
        }
        cout << n - c << '\n';
    }
    return 0;
}