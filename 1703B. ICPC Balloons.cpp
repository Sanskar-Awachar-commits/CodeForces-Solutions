#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    map<char, long long> m;
    while (t--) {
        m.clear();
        int n;
        cin >> n;
        string s;
        cin >> s;
        int output = 0;
        for (int i = 0; i < n; i++) {
            if (m[s[i]] == 0) {
                output += 2;
            }
            else {
                output++;
            }
            m[s[i]]++;
        }
        cout << output << '\n';
    }
    return 0;
}