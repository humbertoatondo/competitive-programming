#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> v;
int n ,t;

int main() {
    cin >> n >> t;
    if (t == 10 && n == 1) {
        cout << -1 << endl;
        return 0;
    }
    cout << t;
    for (int i = to_string(t).length(); i < n; i++) {
        cout << 0;
    }
    cout << endl;
    return 0;
}