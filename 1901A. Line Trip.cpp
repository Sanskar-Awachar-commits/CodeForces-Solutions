#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
	cin >> t; 
	while(t--){
		int n, x;
		cin >> n >> x; 
		vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
		int minn = -2147483647;
		for(int i = 1; i < n; i++) {
            minn = max(minn, a[i] - a[i - 1]);
        }
		cout << max({a[0], 2 * (x - a[n - 1]), minn}) << '\n';
	}
    return 0;
}