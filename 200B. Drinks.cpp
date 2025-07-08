#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[110];
    cin >> n;
    double output = 0.0, sum = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    output = sum / n;
    cout << fixed << setprecision(12) << output << endl;
    return 0;
}