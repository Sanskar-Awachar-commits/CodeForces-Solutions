#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a = n % 10;
        int output = (n - a) / 10 + a;
        cout << output << endl;
    }
    

    return 0;
}