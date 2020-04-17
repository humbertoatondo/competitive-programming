#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int n, k, x;
vector<int> v;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (k && x < 0) { x *= -1; k--; }
        v.push_back(x);
    }
    if (!k)
    {
        cout << accumulate(v.begin(), v.end(), 0) << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    while (k--) v[0] *= -1;
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    return 0;
}