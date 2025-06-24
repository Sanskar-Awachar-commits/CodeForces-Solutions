#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int totalMoney = 0;
    for (int i = 1; i < (w + 1); i++) {
        totalMoney += i * k;
    };
    int output = max(0, totalMoney - n);
    cout << output;
    return 0;
}