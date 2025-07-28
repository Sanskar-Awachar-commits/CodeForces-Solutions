#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int sum = k;
    for (int i = 0; i <= n; i++) {
        sum += i * 5;
        if (sum > 240) {
            cout << (i - 1);
            return 0;
        }
    }
    cout << n;
    return 0;
}