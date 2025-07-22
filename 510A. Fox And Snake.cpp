#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    bool full = true;
    bool r = true;
    for (int i = 0; i < m; i++) {
        if (full) {
            for (int i = 0; i < n; i++) {
                cout << "#";
            }
            cout << "\n";
            full = false;
        }
        else {
            if (r) {
                for (int i = 0; i < (n - 1); i++) {
                    cout << ".";
                }
                cout << "#\n";
                r = false;
            }
            else {
                cout << "#";
                for (int i = 0; i < (n - 1); i++) {
                    cout << ".";
                }
                cout << "\n";
                r = true;
            }
            full = true;
        }
    }
    return 0;
}