#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, f, k, l;
vector<pair<int,pair<int,int>>> v;
unsigned long long int res;

int main() {
    // Get inputs
    cin >> n >> f;
    while (n--) { cin >> k >> l; v.push_back(make_pair(min(l, k * 2) - min (l, k), make_pair(l, k))); }
    // Solve
    res = 0;
    sort(v.rbegin(), v.rend());
    for (pair<int,pair<int,int>> p : v) {
        if (f) { res += min(p.second.second * 2, p.second.first); f--; }
        else { res += min(p.second.second, p.second.first); }
    }
    cout << res << endl;
    return 0;
}