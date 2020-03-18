#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int n, a;
vector<int> v, vo;
map<int,int> m;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        v.push_back(a);
        vo.push_back(a);
    }

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < v.size(); i++) {
        if (m.find(v[i]) == m.end()) m[v[i]] = i + 1;
    }

    for (int i = 0; i < vo.size(); i++) {
        cout << m[vo[i]] << " ";
    }
    cout << endl;
    return 0;
}