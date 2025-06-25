#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int low = 0;
    int aNum = int('a') - 1;
    int capsDiff = int('a') - int('A');
    for (int i = 0; i < n; i++) {
        if (int(s[i]) > aNum) low++;
    }
    int high = n - low;
    string output = "";
    if (low < high) {
        for (int i = 0; i < n; i++) {
            if (int(s[i]) > aNum) {
                output += char(int(s[i]) - capsDiff);
            }
            else {
                output += s[i];
            }
        };
    }
    else {
        for (int i = 0; i < n; i++) {
            if (int(s[i]) > aNum) {
                output += s[i];
            }
            else {
                output += char(int(s[i]) + capsDiff);
            }
        };
    }
    cout << output;
    return 0;
}