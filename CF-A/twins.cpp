#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a, t;
vector<int> v;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        t += a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());
    int i;
    int c;
    for (i = 0; i < v.size(); i++) {
        if (c > (t / 2)) break;
        c += v[i];
    }
    cout << i << endl;
    return 0;
}