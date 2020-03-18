#include <iostream>
using namespace std;

int n, k, l, c ,d, p, nl, np;

int main() {
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drink = k * l;
    int sliced_limes = c * d;
    cout << min(drink / nl / n, min(p / np/ n, sliced_limes / n)) << endl;
    return 0;
}