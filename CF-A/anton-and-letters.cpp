#include <iostream>
#include <set>
#include <string>
using namespace std;

set<char> s;
string letters;

int main() {
    getline(cin, letters);
    for (char& c : letters) {
        if (c >= 97 && c <= 122) {
            s.insert(c);
        }
    }
    cout << s.size() << endl;
    return 0;
}