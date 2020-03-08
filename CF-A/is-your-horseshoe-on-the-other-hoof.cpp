#include <iostream>
#include <set>
using namespace std;

set<int> s;
int a, n, c;

int main() {
    n = 4;
    while (n--) {
        cin >> a;
        if (s.find(a) != s.end()) {
            c++;
        }
        else s.insert(a);
    }
    cout << c << endl;
    return 0;
}