#include <iostream>
using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;
    while (a < c) {
        a += b;
        if (c <= a) { cout << c << endl; return 0; }
        c -= d;
    }
    cout << max(a, c) << endl;
    return 0;
}