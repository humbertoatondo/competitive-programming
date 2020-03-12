#include <iostream>
#include <map>
#include <string>
using namespace std;

int n, c;
string s;
map<string, int> m{
    {"Tetrahedron", 4},
    {"Cube", 6},
    {"Octahedron", 8},
    {"Dodecahedron", 12},
    {"Icosahedron", 20}
    };

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        c += m[s];
    }
    cout << c << endl;
    return 0;
}