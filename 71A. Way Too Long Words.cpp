#include <iostream>
#include <string>
using namespace std;

int main () {
    int numberOfWords = 0;
    cin >> numberOfWords;
    for (int i = 0; i < numberOfWords; i++) {
        string word;
        cin >> word;
        int wordLen = word.length();
        if (wordLen > 10) {
            cout<< word[0] + to_string(wordLen - 2) + word[wordLen - 1];
        }
        else {
            cout << word;
        };
        if (i != numberOfWords - 1) {
            cout << "\n";
        }
    };
    return 0;
}