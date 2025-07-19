#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int output = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Tetrahedron") {
            output += 4;
        }
        if (s == "Cube") {
            output += 6;
        }
        if (s == "Octahedron") {
            output += 8;
        }
        if (s == "Dodecahedron") {
            output += 12;
        }
        if (s == "Icosahedron") {
            output += 20;
        }
    }
    cout << output;
    return 0;
}