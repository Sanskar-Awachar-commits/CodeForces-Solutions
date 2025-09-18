#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int output = 0;
    int pre = 0;
    for (int i = 1; t >= pre + i; i++) {
        output++;
        t -= pre + i;
        pre = pre + i;
    }
    cout << output << '\n';
    return 0;
}