#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    int output = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') output+= a;
        if (s[i] == '2') output+= b;
        if (s[i] == '3') output+= c;
        if (s[i] == '4') output+= d;
    }
    cout << output;
    return 0;
}