#include <iostream>
#include <map>
using namespace std;

int n, a, b;
map<int,int> m;

int main() {
    cin >> n;
    while (n--) {
        cin >> a >> b;
        m.insert(make_pair(a, b));
    }

    int prev = 0;
    for (pair<int,int> p : m) {
        if (p.second < prev) { 
            cout << "Happy Alex" << endl;
            return 0;
        }
        prev = p.second;
    }

    cout << "Poor Alex" << endl;
    return 0;
}