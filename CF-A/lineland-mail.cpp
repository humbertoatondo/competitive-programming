#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int x;
vector<int> v;

int main() {
    cin >> n;
    while (n--) {
        cin >> x;
        v.push_back(x);
    }
    int mi;
    int ma;
    for (int i = 0; i < v.size(); i++) {
        if (i == 0) {
            mi = abs(v[i] - v[i + 1]);
            ma = abs(v[i] - v.back());
        }
        else if (i == v.size() - 1) {
            mi = abs(v[i] - v[i-1]);
            ma = abs(v[i] - v[0]);
        }
        else {
            mi = min(abs(v[i] - v[i-1]), abs(v[i] - v[i+1]));
            ma = max(abs(v[i] - v[0]), abs(v[i] - v.back()));
        }
        cout << mi << " " << ma << endl;
        }
    return 0;
}