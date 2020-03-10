#include <iostream>
#include <regex>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string a, b;
ostringstream oss;

int main() {
    cin >> a >> b;
    if (a == b || b.length() == 0) {
        cout << -1 << endl;
        return 0;
    }
    oss << "[" << a << "]{2,}";
    regex r(oss.str());
    string str = regex_replace(b, r, "-");
    int m = 0;
    int t = 0;
    for (char& c : str) {
        if (c != '-') m++;
        else {
            t = max(t, m);
            m = 0;
        }
    }
    cout << max(t, m) << endl;
    return 0;
}