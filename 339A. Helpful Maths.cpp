#include <iostream>
using namespace std;
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int i, n, m, t = 0, k, w = 0;
    string s;
    int arr[100];
    cin >> s;
    for (i = 0; i < s.length(); i += 2) {
        arr[t] = s[i] - '0';
        t++;
    };
    qsort(arr, t, sizeof(int), compare);
    t = 0;
    for (i = 0; i < s.length(); i += 2) {
        if (i == s.length() - 1) {
            cout << arr[t] << endl;
            break;
        };
        cout << arr[t] << "+";
        t++;
    };
    return 0;
}