#include <iostream>
#include <string>
#include <set>
using namespace std;

int y;

int main() {
    cin >> y;
    int n = ++y;
    for (; 1; n++) {
        string n_str = to_string(n);
        set<char> s;
        for (int i = 0; i < n_str.length(); i++) {
            s.insert(n_str[i]);
        }
        if (s.size() == n_str.length()) {
            cout << n_str << endl;
            return 0;
        }
    }
    return 0;
}