#include <iostream>
using namespace std;

int n;
int a, b, c;
int t;
int o;

int main() {
    cin >> n;
    while (n--) {
        t = 0;
        cin >> a >> b >> c;
        if (a == 1) t++;
        if (b == 1) t++;
        if (c == 1) t++;
        if (t >= 2) o++;
    }
    cout << o << endl;
    return 0;
}