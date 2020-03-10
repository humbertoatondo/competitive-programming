#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string s;
vector<char> v;

int main() {
    cin >> s;
    for (char& c : s) {
        if (c >= 49 && c <= 51) {
            v.push_back(c);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << "+";
    }
    cout << v[v.size()-1] << endl;
    return 0;
}