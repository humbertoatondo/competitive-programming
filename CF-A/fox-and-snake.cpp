#include <iostream>
using namespace std;

int n, m;
bool flag;

int main() {
    cin >> n >> m;
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < m; i++) {
            if (k % 2 == 0) {
                cout << "#";
            }
            else if (k % 2 == 1) {
                if (flag && i == m - 1) {
                    cout << "#";
                }
                else if (!flag && i == 0) {
                    cout << "#";
                } 
                else cout << ".";
            }
        }
        if (k % 2 == 0) flag = !flag;
        cout << endl;
    }
    return 0;
}