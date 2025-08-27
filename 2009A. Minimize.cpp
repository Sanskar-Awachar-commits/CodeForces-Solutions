#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t;
    while(t--){
        long a, b;
        cin >> a >> b;
        cout << (b - a) << '\n';
    }
    return 0;
}