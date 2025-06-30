#include <iostream>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int output = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > h) output += 2;
        else output++;
    };
    cout << output;
    return 0;
}