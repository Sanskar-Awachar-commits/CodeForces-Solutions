#include <iostream>
using namespace std;

int main() {
    int a[1000], b[1000];
    int n;
    cin >> n;
    int output = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                output++;
            }
        }
    }
    cout << output;
    return 0;
}