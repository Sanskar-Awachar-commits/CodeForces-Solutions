#include <iostream>
using namespace std;

int main() {
    long long int k, r, n;
    cin >> k >> r;
    for (long long int i = 1; i <= 9; i++) {
        if ((k * i) % 10 == r || (k * i) % 10 == 0) {
            n = i;
            break;
        }
    }
    cout << n << endl;
    return 0;
}