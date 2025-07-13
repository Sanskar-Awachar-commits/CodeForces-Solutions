#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    bitset<26> used;
    for (auto& c: s) {
        if (c > 96 && c < 123) {
            used.set(c - 97);
        }
        else {
            used.set(c - 65);
        };
    }
    bool output = true;
    for (int i = 0; i < 26; i++) {
        output = output & used.test(i);
    }
    if (output) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}