#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            if (b > c) {
                cout << (a - c);
            }
            else {
                cout << (a - b);
            }
        }
        else {
            cout << (c - b);
        }
    }
    else {
        if (b > c) {
            if (a > c) {
                cout << (b - c);
            }
            else {
                cout << (b - a);
            }
        }
        else {
            cout << (c - a);
        }
    }
    return 0;
}