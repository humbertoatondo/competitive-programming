#include <iostream>
#include <vector>
using namespace std;

int n, vi;
vector<int> v;

int main() {
    // Input values
    cin >> n;
    while (n--) { cin >> vi; v.push_back(vi); }

    // Get index i and j where array becomes not sorted.
    int i = 0, j = v.size() - 1;
    for (; i < v.size() - 1 && v[i] < v[i + 1]; i++);
    for (; j > 0 && v[j] > v[j - 1]; j--);
    if (i == v.size() - 1) { cout << "yes\n" << 1 << " " << 1 << endl; return 0;}

    // Reverse subarray
    for (int k = i, p = j; k < p; k++, p--) {
        int tmp = v[k];
        v[k] = v[p];
        v[p] = tmp;
    }

    // Check if it is sorted.
    int prev = 0;
    for (int el : v) {
        if (el < prev) { cout << "no" << endl; return 0; }
        prev = el;
    }
    cout << "yes" << endl;
    cout << i + 1 << " " << j + 1 << endl;
    cout << endl;
}