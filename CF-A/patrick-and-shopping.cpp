#include <iostream>
using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >>c;
    int res1 = a + b + c;
    int res2 = (a * 2) + (b * 2);
    int res3 = (a * 2) + (c * 2);
    int res4 = (b * 2) + (c * 2);
    cout << min(res1, min(res2, min(res3, res4))) << endl;
    return 0;
}