#include <iostream>
#include <string>
#include <regex>
using namespace std;

string s;

int main() {
    cin >> s;
    regex r("[aeiouyAEIOUY]");
    s = regex_replace(s, r, "");

    for (char& c : s) {
        cout << "." << char(tolower(c));
    }
    cout << endl;
    return 0;
}