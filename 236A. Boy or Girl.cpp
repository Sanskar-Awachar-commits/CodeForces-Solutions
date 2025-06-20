#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[26] = {0};
    int uniques = 0;
    for (int i = 0; i < s.length(); i++) {
        freq[int(s[i]) - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) uniques++;
    };
    if (uniques & 1 == 1) {
        cout << "IGNORE HIM!";
    }
    else {
        cout << "CHAT WITH HER!";
    };
    return 0;
}