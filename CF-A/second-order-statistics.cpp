#include <iostream>
#include <set>
using namespace std;

int n, a;
set<int> s;

int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        s.insert(a);
    }
    if (s.size() < 2) cout << "NO" << endl;
    else {
        set<int>::iterator it = s.begin();
        it++;
        cout << *it << endl;
    }
    return 0;
}