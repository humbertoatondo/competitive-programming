#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int n;
string team;
map<string, int> m;
vector<string> v;

int main() {
    cin >> n;
    while (n--) {
        cin >> team;
        if (m.find(team) != m.end()) {
            m[team] += 1;
        }
        else {
            m.insert(make_pair(team, 1));
            v.push_back(team);
        }
    }
    if (v.size() < 2) cout << v[0] << endl;
    else if (m[v[0]] > m[v[1]]) cout << v[0] << endl;
    else cout << v[1] << endl;
    return 0;
}