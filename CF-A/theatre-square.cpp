#include <iostream>
#include <cmath>
using namespace std;

int  n, m, a;

int main() {
    cin >> n >> m >> a;
    long long t = ceil(double(n) / a) * ceil(double(m) / a);
    cout << t << endl;
    return 0;
}