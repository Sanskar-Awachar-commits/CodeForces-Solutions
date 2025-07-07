#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int i = 1;
    for (int j = 1; j < (n + 1); j++) {
        int t;
        cin >> t;
        v[t - 1] = i;
        i++;
    };
    for (int j = 0; j < n; j++) {
        cout << v[j] << " ";
    }
    return 0;
}