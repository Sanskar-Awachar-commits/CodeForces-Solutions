#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int year;
        cin >> year;
        int root = sqrt(year);
        bool found = false;
        [&] {
            for (int i = 0; i < (root + 1); i++) {
                for (int j = 0; j < (root + 1); j++) {
                    if ((i + j) * (i + j) == year) {
                        cout << i << " " << j << endl;
                        found = true;
                        return;
                    };
                };
            };
        }();
        if (!found) cout << -1 << endl;
    };
    return 0;
}