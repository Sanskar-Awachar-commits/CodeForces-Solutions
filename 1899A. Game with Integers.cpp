#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x % 3 == 0) {
            cout << "Second";
        }
        else {
            cout << "First";
        }
        cout << "\n";
    }
    cin>>t;
    return 0;
}