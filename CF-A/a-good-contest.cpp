#include <iostream>
#include <string>
using namespace std;

int n;
string name;
int before, after;
bool flag = 0;

int main() {
    cin >> n;
    while (n--) {
        cin >> name >> after >> before;
        if (after < before && after >= 2400) flag = 1;
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}