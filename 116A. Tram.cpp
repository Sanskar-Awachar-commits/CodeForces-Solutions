#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int output = 0;
    int curr = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        curr += b - a;
        output = max(output, curr);
    };
    cout << output;
    return 0;
}