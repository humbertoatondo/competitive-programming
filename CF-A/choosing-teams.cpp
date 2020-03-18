#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
int y;
vector<int> v;

int main() {
    cin >> n >> k;
    while (n--) {
        cin >> y;
        v.push_back(5 - k - y);
    }

    sort(v.rbegin(), v.rend());
    int t = 0;
    for (int i : v) {
        if (i >= 0) t++;
    }
    cout << t / 3 << endl;
    return 0;
}