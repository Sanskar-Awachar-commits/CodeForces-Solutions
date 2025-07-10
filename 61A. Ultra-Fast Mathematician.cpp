#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string output = "";
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            output += "1";
        }
        else {
            output += "0";
        };
    };
    cout << output;
    return 0;
}