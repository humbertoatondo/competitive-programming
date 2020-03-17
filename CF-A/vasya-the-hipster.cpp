#include <iostream>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    int mi = min(a, b);
    cout << mi << " " << abs(a-b) / 2 << endl;
    return 0;
}