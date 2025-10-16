#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int h, m;
    while(t--){
        cin >> h;
        cin >> m;
        cout << (1440 - (60 * h) - m)<< endl;
    }
    return 0;
}