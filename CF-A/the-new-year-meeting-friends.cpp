#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c;
vector<int> v;

int main() {
    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    cout << v[1] - v[0] + v[2] - v[1] << endl;
    return 0;
}