#include <iostream>
using namespace std;

int n, m;
char a;
int flag;

int main() {
    cin >> n >> m;
    while (n--) {
        for (int i = 0; i < m; i++) {
            cin >> a;
            if (a == 'C' || a == 'M' | a == 'Y') flag = 1;
        }
    }
    if (flag) cout << "#Color" << endl;
    else cout << "#Black&White" << endl;
    return 0;
}