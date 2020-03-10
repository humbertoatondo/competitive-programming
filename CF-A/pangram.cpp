#include <iostream>
#include <string>
#include <set>
using namespace std;

int n;
string str;
set<char> s;

int main() {
    cin >> n >> str;
    for (char& c : str) {
        s.insert(tolower(c));
    }
    if (s.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}