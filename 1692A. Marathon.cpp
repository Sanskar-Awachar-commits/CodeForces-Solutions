#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long output = 0;
        if (b > a)
            output++;
        if (c > a)
            output++;
        if (d > a)
            output++;
        cout << output << endl;
    }
}