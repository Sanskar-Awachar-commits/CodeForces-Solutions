#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = b;
    b = a;
    a = t;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (c < b) {
            swap(b, c);
        }
        if (b < a) {
            swap(a, b);
        }
        if (c < b) {
            swap(b, c);
        }
        if (a + b == c) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}