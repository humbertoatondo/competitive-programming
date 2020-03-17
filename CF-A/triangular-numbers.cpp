#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
    cin >> n;
    int k = 0;
    for (int i = 1; k <= 500; i++) {
        k = (i * (i + 1)) / 2;
        if (n == k) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}