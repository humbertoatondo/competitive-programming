#include <iostream>
using namespace std;

int l, r, a;

int main() {
    cin >> l >> r >> a;
    int mi = min(l, r);
    int ma = max(l, r);
    int d = abs(l - r);
    if (d > a) {
        cout << (mi + a) * 2 << endl;
    }
    else {
        int h = a - d;
        cout << (ma * 2) + (h / 2 * 2) << endl;
    }
    return 0;
}