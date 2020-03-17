#include <iostream>
#include <cmath>
using namespace std;

int n, t, k, d;

int main() {
    cin >> n >> t >> k >> d;
    int r1 = ceil(n / k) * t;
    int r2 = 5 + (ceil(n / k) * t/2);
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}
