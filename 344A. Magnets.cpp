#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int output = 1;
    for (int i = 1; i < n; i++) {
        string s2;
        cin >> s2;
        if (s1 != s2) output++;
        s1 = s2;
    }
    cout << output;
    return 0;
}