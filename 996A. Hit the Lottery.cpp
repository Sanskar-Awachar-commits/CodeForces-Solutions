#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int output = 0;
    while (n > 99) {
        n -= 100;
        output++;
    }
    while (n > 19) {
        n -= 20;
        output++;
    }
    while (n > 9) {
        n -= 10;
        output++;
    }
    while (n > 4) {
        n -= 5;
        output++;
    }
    while (n > 0) {
        n -= 1;
        output++;
    }
    cout << output;
    return 0;
}