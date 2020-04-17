#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n, ai;
vector<int> v;

int main() {
    cin >> n;
    while (n--) { cin >> ai; v.push_back(ai); }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 2; i++) {
        if (v[i] + v[i + 1] > v[i + 2]) { cout << "YES" << endl; return 0; }
    }
    cout << "NO" << endl;
    return 0;
}