#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cn = 1; cn <= t; cn++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        bool bo = false;
        for (int i = 0; i < n - 1; i++) {
            if (a[i + 1] - a[i] > 1) {
                cout << "NO" << endl;
                bo = true;
                break;
            }
        }
        if (!bo) cout << "YES" << endl;
    }
    return 0;
}