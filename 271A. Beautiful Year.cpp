#include <iostream>
using namespace std;
bool indist(int num) {
    int a, b, c, d;
    a = num % 10;
    b = (num % 100) / 10;
    c = (num % 1000) / 100;
    d = (num % 10000) / 1000;
    if (a != b && a != c && a != d && b != c && b != d && c != d) {
        return false;
    } else
        return true;
}
int main() {
    int n;
    cin >> n;
    n++;
    while (indist(n)) {
        n++;
    }
    cout << n;
    return 0;
}