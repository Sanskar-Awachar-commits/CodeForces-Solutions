#include <iostream>
using namespace std;
const int N = 1e6;
bool arr[N + 5];
int main() {
    arr[0] = true;
    arr[1] = true;
    for (int i = 2; i <= N; i++) {
        if (arr[i]) continue;
        for (long long j = (long long)i * i; j <= N; j += i) {
            arr[j] = true;
        }
    }
    int n;
    cin >> n;
    int num1 = (n >> 1);
    int num2 = n - num1;
    while (arr[num1] == 0 || arr[num2] == 0) {
        ++num1;
        num2 = n - num1;
    }
    cout << num1 << " " << num2;
    return 0;
}