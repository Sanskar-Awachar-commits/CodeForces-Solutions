#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    vector<int> vec[3];
    for (int i = 0; i < t; i++) {
        int val;
        cin >> val;
        vec[val - 1].push_back(i + 1);
    }
    int minValue = min(vec[0].size(), min(vec[2].size(), vec[1].size()));
    cout << minValue << '\n';
    for (int i = 0; i < minValue; i++) {
        cout << vec[0][i] << ' ' << vec[1][i] << ' ' << vec[2][i] << '\n';
    }
    return 0;
}