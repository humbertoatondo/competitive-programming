#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int n, t;
map<int,vector<int>> m { {1, {}}, {2, {}}, {3, {}} };

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        m[t].push_back(i);
    }
    int top = min(min(m[1].size(), m[2].size()), m[3].size());
    cout << top << endl;
    for (int i = 0; i < top; i++) {
        for (int i = 1; i <= m.size(); i++) {
            cout << m[i].back() << " ";
            m[i].pop_back();
        }
        cout << endl;
    }
    return 0;
}