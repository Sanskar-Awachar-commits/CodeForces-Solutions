#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if (m & 1 && n & 1) {
        cout << (m * n - 1) / 2;
    }
    else {
        cout << m * n / 2;
    };
    return 0;
}