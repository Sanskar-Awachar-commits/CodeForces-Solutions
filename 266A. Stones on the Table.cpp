#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int output = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            output++;
        }
    }
    cout << output;
    return 0;
}