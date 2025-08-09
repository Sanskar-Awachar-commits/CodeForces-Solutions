#include <iostream>
using namespace std;

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int first = 0, second = 0;
        for (int i = 0; i < 6; i++) {
            if (i < 3) first += s[i] - '0';
            else second += s[i] - '0';
        }
        if (first == second) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}