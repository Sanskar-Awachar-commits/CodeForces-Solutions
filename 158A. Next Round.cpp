#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    vector<int> scores;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        scores.push_back(score);
    };
    int kth = scores[k - 1];
    int output = 0;
    int i = 0;
    while (scores[i] != 0 && scores[i] >= kth && i < n) {
        output++;
        i++;
    };
    cout << output;
    return 0;
}