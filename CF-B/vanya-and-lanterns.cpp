#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int n, l;
long double ai;
vector<double> lanterns;

int main() {
    cin >> n >> l;
    for (int i = 0; i < n; i++) { cin >> ai; lanterns.push_back(ai); }
    sort(lanterns.begin(), lanterns.end());
    double dist = 0;
    for (int i = 1; i < lanterns.size(); i++) {
        dist = max(dist, lanterns[i] - lanterns[i - 1]);
    }
    double sol = max(lanterns[0], max(dist / 2.0, l - lanterns.back()));
    cout << fixed << setprecision(11) << sol << endl;
    return 0;
}