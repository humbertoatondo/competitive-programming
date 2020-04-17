#include <iostream>
#include <string>
#include <regex>
#include <set>
using namespace std;

int n, m;
string row;
set<string> paths;

int main() {
    cin >> n >> m;
    smatch match;
    regex r ("(G)(\\*)*(S)");
    bool impossible = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> row;
        if (regex_search(row, match, r)) {
            paths.insert(match.str());
        }
        else impossible = 1;
    }
    if (impossible) cout << -1 << endl;
    else {
        cout << paths.size() << endl;
    }
    
    return 0;
}