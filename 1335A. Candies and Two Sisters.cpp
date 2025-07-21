#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    double n;
    long long int output;
    cin >> t;
    while (t--) {
        output = 0;
        cin >> n;
        output = ceil((n / 2) - 1);
        cout << output << endl;
    }
    return 0;
}