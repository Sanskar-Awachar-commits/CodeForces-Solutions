#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;
    int a, b, m = 0, c = 0;
    while (t--) {
        cin >> a >> b;
        if (a > b)
            m++;
        if (b > a)
            c++;
    }
    if (m == c)
        cout << "Friendship is magic!^^" << '\n';
    else if (m > c)
        cout << "Mishka" << '\n';
    else if (c > m)
        cout << "Chris" << '\n';
    return 0;

    return 0;
}