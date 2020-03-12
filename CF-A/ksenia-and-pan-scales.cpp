#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

string bal, w;
vector<char> l, r;
int isRight;

int main() {
    cin >> bal >> w;
    for (char& c : bal) {
        if (c == '|') {
            isRight = 1;
            continue;
        }
        if (!isRight) l.push_back(c);
        else r.push_back(c);
    }
    
    int dist = abs(int(l.size()) - int(r.size()));
    if (dist > w.length() || (l.size() + r.size() + w.length()) % 2 == 1)
    {
        cout << "Impossible" << endl;
        return 0;
    } 
    
    for (char& c : w) {
        if (l.size() < r.size()) l.push_back(c);
        else r.push_back(c);
    }

    for (char& c : l) {
        cout << c;
    }
    cout << "|";
    for (char &c : r) {
        cout << c;
    }
    cout << endl;

    return 0;
}