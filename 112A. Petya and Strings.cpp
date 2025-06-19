#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) {
        int c1 = int(s1[i]);
        int c2 = int(s2[i]);
        if (c1 < 97) {
            c1 = c1 + 32;
        };
        if (c2 < 97) {
            c2 = c2 + 32;
        };
        if (c1 < c2) {
            cout << -1;
            return 0;
        };
        if (c1 > c2) {
            cout << 1;
            return 0;
        };
    }
    cout << 0;
    return 0;
}