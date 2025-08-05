#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << " ";
    int c = abs(a - b) / 2;
    cout << c;
    return 0;
}