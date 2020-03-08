#include <iostream>
using namespace std;

int n, b, d;
int a;
int s;
int c;

int main() {
    cin >> n >> b >> d;
    while (n--) {
        cin >> a;
        if (a <= b) {
            s += a;
            if (s > d) {
                c++;
                s = 0;
            }
        }
    }
    cout << c << endl;
    return 0;
}