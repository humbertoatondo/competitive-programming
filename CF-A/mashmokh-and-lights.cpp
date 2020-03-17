#include <iostream>
#include <vector>
using namespace std;

int n, m;
int b;
vector<int> v;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        v.push_back(0);
    }

    for (int i = 0; i < m; i++) {
        cin >> b;
        for (int k = b-1; v[k] == 0; k++) {
            v[k] = b;
        }
    }

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}