#include <iostream>
#include <string>
#include <map>
using namespace std;

int a, b, c, d;
string s;
map<char, int> m;
int t;

int main() {
    cin >> a >> b >> c >> d;
    m['1'] = a;
    m['2'] = b;
    m['3'] = c;
    m['4'] = d;

    cin >> s;
    for (char& i : s) {
        t += m[i];
    }
    cout << t << endl;
    return 0;
}