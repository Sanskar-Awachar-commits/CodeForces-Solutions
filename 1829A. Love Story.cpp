#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    string w = "codeforces";
    while(t--){
        string s;
        cin >> s;
        int output = 0;
        for(int i = 0; i < 10; i++){
            if (s[i] != w[i]) output++;
        }
        cout << output << '\n';
    }
    return 0;
}