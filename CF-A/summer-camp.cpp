#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int n;
ostringstream oss;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        oss << i;
    }
    cout << oss.str()[n-1] << endl;
    return 0;
}
