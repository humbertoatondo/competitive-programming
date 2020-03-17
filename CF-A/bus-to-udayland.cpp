#include <iostream>
#include <string>
#include <regex>
#include <sstream>
using namespace std;

int n;
string s;
ostringstream oss;
bool flag = 0;

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        oss << s << "\n";
    }
    regex r("OO");
    if (regex_search(oss.str(), r)) {
        s = regex_replace(oss.str(), r, "++", regex_constants::format_first_only);
        cout << "YES" << endl;
        cout << s << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}