#include <iostream>
using namespace std;

int a, b;
int years;

int main() {
    cin >> a >> b;
    years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
    return 0;
}