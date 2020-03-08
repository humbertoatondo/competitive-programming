#include <iostream>
using namespace std;

int k, r;
int c;
int t;

int main() {
    cin >> k >> r;
    t = k;
    while (1) {
        c++;
        if (t % 10 == r || t % 10 == 0) {
            break;
        }
        t += k;
    }
    cout << c << endl;
    return 0;
}