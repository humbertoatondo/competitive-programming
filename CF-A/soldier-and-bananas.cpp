#include <iostream>
using namespace std;

int k, n, w;

int main() {
    cin >> k >> n >> w;
    long long t = 0;
    for (int i = 1; i <= w; i++) {
        t += k * i;
    }
    
    if (t > n) cout << t - n << endl;
    else cout << 0 << endl;
    return 0;
}