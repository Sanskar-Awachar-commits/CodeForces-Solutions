#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        long long int output = (x2 - x1) * (y2 - y1);
        cout << output + 1 << endl;
    }
    return 0;
}