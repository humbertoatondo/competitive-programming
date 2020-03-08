#include <iostream>
#include <cmath>
using namespace std;

int i, j;
int x, y;
int n;
int res;

int main() {
    i = 0;
    while (i < 5) {
        j = 0;
        while (j < 5) {
            cin >> n;
            if (n == 1) res = abs(2 - i) + abs(2 - j);
            j++;
        }
        i++;
    }
    cout << res << endl;
    return 0;
}