#include <iostream>
using namespace std;

int n, i, l;
int g;

int main() {
    g = 1;
    cin >> n;
    while (n--) {
        cin >> i;
        if (l && i != l) g++;
        l = i;
    }
    cout << g << endl;
    return 0;
}