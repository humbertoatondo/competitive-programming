#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int n, a;
set<int> nums, diff;

int main() {
    cin >> n;
    while (n--) { cin >> a; nums.insert(a); }
    set<int>::iterator it = nums.begin();
    int mid = (nums.size() - 1) / 2;
    advance(it, mid);
    int x = *it;
    it = nums.begin();
    for (; it != nums.end(); it++) {
        int d = abs(*it - x);
        if (d != 0) diff.insert(d);
    }
    if (diff.size() < 2) { cout << "YES" << endl; }
    else { cout << "NO" << endl; }
    return 0;
}