#include <iostream>
#include <map>

using namespace std;

map<int,int> m;
int n, a;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (m.find(a) == m.end()) {
            m.insert(make_pair(a, 1));
        }
        else {
            m[a]++;
        }
    }
    
    map<int,int>::iterator it = m.begin();
    while (it != m.end()) {
        if (it->second > (n + 1) / 2) {
            cout << "NO" << endl;
            return 0;
        }
        it++;
    }
    cout << "YES" << endl;
    return 0;
}