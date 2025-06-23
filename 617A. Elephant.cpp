#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int output = x / 5;
    if (x % 5 == 0) {
        cout << output;
    }
    else {
        cout << output + 1;
    }
    return 0;
}