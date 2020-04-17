#include <iostream>
#include <vector>
using namespace std;

int n, k, vi;
vector<long long> v;

int main() {
    cin >> n >> k;
    v.push_back(0);
    while (n--) {
        cin >> vi;
        v.push_back(v.back() + vi);
    }
    v.push_back(0);

    long long mi = LONG_MAX;
    int p = 1;
    for (int i = 1; i < v.size() - k; i++) {
        if (v[i + k - 1] - v[i - 1] < mi) {
            mi = v[i + k - 1] - v[i - 1];
            p = i;
        }
    }
    cout << p << endl;
    return 0;
}