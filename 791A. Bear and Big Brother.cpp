#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int output = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        output++;
    }
    cout << output;
    return 0;
}