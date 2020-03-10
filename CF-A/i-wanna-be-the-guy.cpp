#include <iostream>
#include <set>
using namespace std;

int n, p, a;
set<int> s1;
set<int> s2;

int main() {
    cin >> n >> p;
    for (int i = 0; i < p; i++) {
        cin >> a;
        s1.insert(a);
    }
    for (int i = 0; i < p; i++) {
        cin >> a;
        s2.insert(a);
    }
    s1.insert(s2.begin(), s2.end());

    if (s1.size() == n) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;

    return 0;
}