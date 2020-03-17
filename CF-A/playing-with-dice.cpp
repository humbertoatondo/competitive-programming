#include <iostream>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    int l = 0;
    int t = 0;
    int r = 0;
    for (int x = 1; x <= 6; x++) {
        if (abs(a - x) < abs(b - x)) l++;
        else if (abs(b - x) < abs(a - x)) r++;
        else t++;
    }
    cout << l << " " << t << " " << r << endl;
    return 0;
}