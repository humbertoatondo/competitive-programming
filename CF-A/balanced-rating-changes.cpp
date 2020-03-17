#include <iostream>
#include <vector>
using namespace std;

int n, a;
int b;
vector<int> v;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        v.push_back(a);
    }
    b = 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) cout << v[i] / 2 << endl;
        else  {
            cout << (v[i] + b) / 2 << endl;
            b *= -1;
        }
    }
    return 0;
}