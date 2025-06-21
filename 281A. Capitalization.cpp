#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (int(s[0] > 96)) {
        s[0] =  char(int(s[0]) - int('a') + int('A'));
    }
    cout << s;
    return 0;
}