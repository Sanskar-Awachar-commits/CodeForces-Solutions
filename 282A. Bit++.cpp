#include <iostream>
using namespace std;

int main() {
    int numberOfStatements;
    cin >> numberOfStatements;
    int x = 0;
    for (int i = 0; i < numberOfStatements; i++) {
        string statement;
        cin >> statement;
        if (statement.at(0) == '+' || statement.at(1) == '+') x++;
        else x--;
    };
    cout << x;
    return 0;
}