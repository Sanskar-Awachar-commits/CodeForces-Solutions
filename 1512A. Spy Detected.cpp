#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];
        unordered_map<long long, long long> hash;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            hash[arr[i]]++;
        }
        long long ele = -1;
        for (auto itr : hash) {
            if (itr.second == 1) ele = itr.first;
        }
        long long output = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == ele) {
                output = i + 1;
                break;
            }
        }
        cout << output << endl;
    }
}