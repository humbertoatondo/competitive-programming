#include <iostream>
using namespace std;

int x;
int t;

int main() {
    cin >> x;
    t = x / 5;
    if (x % 5 != 0) t++;
    cout << t << endl;
    return 0;
}