#include <iostream>
#include <cmath>
using namespace std;

int n;

int main() {
    cin >> n;
    int t = 0;
    for (int i = 0; i < 31; i++) {
        if ((n >> i) & 1) t++;
    }
    cout << t << endl;
    return 0;
}