#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a, b;
vector<int> v1, v2;
int flag;

int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a != b) flag = 1;
        v1.push_back(a);
        v2.push_back(b);
    }

    if (flag) {
        cout << "rated" << endl;
    }
    else if (is_sorted(v1.rbegin(), v1.rend())) {
        cout << "maybe" << endl;
    }
    else {
        cout << "unrated" << endl;
    }

    return 0;
}