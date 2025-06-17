#include <iostream>
using namespace std;

int main() {
    int numberOfProblems;
    cin >> numberOfProblems;
    int output = 0;
    for (int i = 0; i < numberOfProblems; i++) {
        int views = 0;
        for (int i = 0; i < 3; i++) {
            int view;
            cin >> view;
            if (view == 1) views++;
        };
        if (views > 1) output++;
    };
    cout << output;
    return 0;
}