#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    int m = 1;
    int co = 0;
    int k;
    for (k = 0; 1; k++) {
        for (int i = 1; i <= m; i++) {
            co += i;
        }
        if (co > n) break;
        m++;
    }
    cout << k <<  endl;
}
