#include <iostream>
using namespace std;
using ull = unsigned long long;

int n, a;

int main() {
    cin >> n;
    int prev = -1;
    ull res = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a) {
            if (prev == -1) {
                res = 1;
            }
            else res *= i - prev;
            prev = i;
        }
    }
    cout << res << endl;
    return 0;
}