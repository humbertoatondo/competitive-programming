#include <iostream>
#include <vector>
using namespace std;

int n, k, y;
vector<int> v;

int main () {
    cin >> n >> k;
    n = 2 * n + 1;
    while (n--) {
        cin >> y;
        v.push_back(y);
    }
    
    for (int i = 0; i < v.size(); i++) {
        if (!k) break;
        if (i == 0 && v[i] > v[i+1]) {
            v[i] -= 1;
            k--;
        }
        else if (i == v.size() - 1 && v[i] > v[i-1]) {
            v[i] -= 1;
            k--;
        }
        else if (i > 0 && i < v.size() - 1 && v[i] > v[i-1] && v[i] > v[i+1]) {
            v[i] -= 1;
            k--;
        }
    }

    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}