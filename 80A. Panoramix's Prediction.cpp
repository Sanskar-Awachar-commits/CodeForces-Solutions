#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int findPrime(int n, int m) {
    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) return i;
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if (!isPrime(m)) cout << "NO" << endl;
    else if (findPrime(n, m) == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}