#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a;
vector<int> v;
int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        v.push_back(a);
    }
    if (v.size() < 3) {
        cout << 0 << endl;
        return 0;
    }
    sort(v.begin(), v.end());

    int i = 0;
    int j = v.size() - 1;

    while (i <= j && (v[i] == v.front() || v[j] == v.back())) {
        if (v[i] == v.front()) i++;
        if (v[j] == v.back()) j--;
    }
    if (i == j) cout << 1 << endl;
    else if (i > j) cout << 0 << endl;
    else cout << v.size() - i + j << endl;

    return 0;
}