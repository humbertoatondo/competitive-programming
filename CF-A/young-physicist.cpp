#include <iostream>
using namespace std;

int n, x, y, z;
int tx, ty, tz;

int main() {
    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        tx += x;
        ty += y;
        tz += z;
    }
    if (!tx && !ty && !tz) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}