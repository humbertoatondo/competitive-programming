#include <iostream>
#include <vector>
using namespace std;

int n, a;
vector<int> v;

int main() {
    cin >> n;
    int t = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        t += a;
        v.push_back(a);
    }

    t /= n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i] != 0 && v[j] != 0 && i != j && v[i] + v[j] == t) {
                cout << i + 1 << " " << j + 1 << endl;
                v[i] = 0;
                v[j] = 0;
            }
        }
    }
    return 0;
}