#include <iostream>
#include <vector>
using namespace std;

int n, k, x;
vector<int> v;

int main() {
    cin >> n >> k;
    while (n--) {
        cin >> x;
        v.push_back(x);
    }

    int counter = 0;
    for (int i : v) {
        if (i >= v[k-1] and i > 0) counter++;
        else break;
    }
    cout << counter << endl;
    return 0;
}