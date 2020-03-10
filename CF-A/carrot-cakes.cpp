#include <iostream>
#include <cmath>
using namespace std;

int n, t, k, d;

int main() {
    cin >> n >> t >> k >> d;
    int res1 = n / k * t;
    int i, c;
    i = 0;
    c = 0;
    int cakes = 0;
    int flag = 0;
    while (cakes < n) {
        if (i % t == 0 && i > 0) {
            cakes += k;
        }
        if (i == d) flag = 1;
        if (c % t == 0 && c > 0) {
            cakes += k;
        }
        if (flag) c++;
        i++;
    }
    if (res1 <= i - 1) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
