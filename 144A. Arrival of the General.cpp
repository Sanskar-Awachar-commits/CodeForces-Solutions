#include <iostream>
#include <vector>
using namespace std;
vector<int> arr;
int main() {
    int n, mx = 0, mn = 101, mxIdx, mnIdx;
    cin >> n;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > mx) {
            mx = arr[i];
            mxIdx = i;
        }
        if (arr[i] <= mn) {
            mn = arr[i];
            mnIdx = i;
        }
    }
    if (mxIdx > mnIdx)
        cout << mxIdx + arr.size() - mnIdx - 2 << endl;
    else
        cout << mxIdx + arr.size() - mnIdx - 1 << endl;
    return 0;
}