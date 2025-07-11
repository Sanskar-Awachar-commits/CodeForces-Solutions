#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 0;
    while ( i < n) {
        if (i % 2 == 0) {
            cout << "I hate ";
        }
        else {
            cout << "I love ";
        };
        if (i != (n - 1)) {
            cout << "that ";
        }
        else {
            cout << "it";
        };
        i++;
    };
    return 0;
}