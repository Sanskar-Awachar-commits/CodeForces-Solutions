#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int output = 0;
        output += arr[0] + 1;
        for (int i = 1; i < n; i++) {
            output *= arr[i];
        }
        cout << output << '\n';
    }
    return 0;
}