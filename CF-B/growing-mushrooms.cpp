#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int n, t1, t2, k, a, b;
vector<pair<double,int>> places;

int main() {
    cin >> n >> t1 >> t2 >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        double ans1 = a * t1 * (1.0 - (k / 100.0)) + b * t2;
        double ans2 = b * t1 * (1.0 - (k / 100.0)) + a * t2;
        pair<double,int> p = make_pair(max(ans1, ans2), i);
        places.push_back(p);
    }

    sort(places.rbegin(), places.rend(), [](auto &left, auto &right) {
        if (left.first == right.first) return left.second > right.second;
        else return left.first < right.first;
    });
    for (auto p : places) cout << fixed << setprecision(2) << p.second << " " << p.first << endl;
    return 0;
}