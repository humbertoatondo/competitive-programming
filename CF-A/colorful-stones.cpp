#include <iostream>
#include <string>
using namespace std;

string l;
string t;
int pos;

int main() {
    cin >> l >> t;
    for (char& c : t) {
        if (c == l[pos]) pos++;
    }
    pos++;
    cout << pos << endl;
    return 0;
}