#include <iostream>
#include <vector>
using namespace std;

int n, a, m, x, y;
vector<int> v;

int main() {
    cin >> n;
    v.push_back(0);
    while (n--) {
        cin >> a;
        v.push_back(a);
    }
    v.push_back(0);
    cin >> m;
    while (m--) {
        cin >> x >> y;
        v[x-1] += y - 1;
        v[x+1] += v[x] - y;
        v[x] = 0;
    }
    v.erase(v.begin());
    v.pop_back();
    for (int& i : v) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}