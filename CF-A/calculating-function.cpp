#include <iostream>
using namespace std;

long long n;

int main() {
    cin >> n;
    if (n % 2 == 0) cout << n / 2 << endl;
    else cout << (n + 1) / -2 << endl;
    return 0;
}