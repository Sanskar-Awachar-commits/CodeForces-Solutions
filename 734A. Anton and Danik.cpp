#include <iostream>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int a = 0;
    for (auto& c : s) {
        if (c == 'A') a++;
    }
    int twice = a * 2;
    if (twice == n) cout << "Friendship";
    else if (twice > n) cout << "Anton";
    else cout << "Danik";
    return 0;
}