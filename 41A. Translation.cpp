#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.length();
    if (n != b.length()) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[n - i - 1]) {
            cout << "NO";
            return 0;
        };
    };
    cout << "YES";
    return 0;
}