#include <iostream>
#include <cmath>
using namespace std;

long long n;
long long bit;

int main() {
    while (cin >> n and n != 0) {
        bit = sqrt(n);
        if (bit * bit == n) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
