#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, max, output = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        int diff = max - arr[i];
        if (diff == 0)
            break;
        else
            output = output + diff;
    }
    cout << output;
    return 0;
}
