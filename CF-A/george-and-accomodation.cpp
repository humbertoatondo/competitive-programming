#include <iostream>
using namespace std;

int n, p, q;
int c;

int main() {
    cin >> n;
    while (n--) {
        cin >>p >> q;
        if (q - p >= 2) c++;
    }
    cout << c << endl;
    return 0;
}