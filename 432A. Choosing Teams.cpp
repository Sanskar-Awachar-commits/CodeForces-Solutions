#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k, t;
    cin >> n >> k;
    int output = 0;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t + k <= 5) output++;
    }
    cout << output / 3 << '\n';
    return 0;
}