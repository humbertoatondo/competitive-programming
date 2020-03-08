#include <iostream>
using namespace std;

int n, h;
int a;
int c;

int main() {
    cin >> n >> h;
    while (n--) {
        cin >> a;
        if (a > h) c += 2;
        else c++;
    }
    cout << c << endl;;
    return 0;
}