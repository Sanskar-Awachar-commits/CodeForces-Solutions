#include <iostream>
using namespace std;

int main() {
    long long int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    int output = 0;
    if (n1 == n2 || n1 == n3 || n1 == n4) {
        output++;
    };
    if (n2 == n3 || n2 == n4) {
        output++;
    }
    if (n3 == n4) {
        output++;
    };
    cout << output;
    return 0;
}