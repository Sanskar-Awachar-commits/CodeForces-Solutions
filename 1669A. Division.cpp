#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int r;
        cin >> r;
        cout << "Division ";
        if (r >= 1900) cout << "1";
        if (r <= 1899 && r >= 1600) cout << "2";
        if (r <= 1599 && r >= 1400) cout << "3";
        if (r <= 1399) cout << "4";
        cout << endl;
    }
    return 0;
}