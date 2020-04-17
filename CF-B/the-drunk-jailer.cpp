#include <iostream>
#include <vector>
using namespace std;

int tc, n;
vector<bool> cells;

int main() {
    cin >> tc;
    while (tc--) {
        cin >> n;
        for (int i = 0; i < n; i++) { cells.push_back(0); }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j += i) {
                cells[j] = !cells[j];
            }
        }
        int sum = 0;
        for (auto el : cells) { sum += el; }
        cout << sum << endl;
        cells.clear();
    }
    return 0;
}