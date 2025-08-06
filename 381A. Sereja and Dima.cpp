#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int l = 0;
    int r = n - 1;
    int s = 0;
    int d = 0;
    bool turn = true;
    while (l <= r) {
        if (v[l] > v[r]) {
            if (turn == true) {
                s += v[l];
            }
            else {
                d += v[l];
            }
            l++;
        }
        else {
            if (turn == true) {
                s += v[r];
            }
            else {
                d += v[r];
            }
            r--;
        }
        turn = !turn;
    }
    cout << s << " " << d;
    return 0;
}