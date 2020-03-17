#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
vector<string> v;
string s;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
    }

int t = 0;
    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = 0; j < n; j++) {
            if (v[i][j] == 'C') k++;
        }
        if (k < 2) continue;
        int mult = 1;
        while (k > 1) mult *= k--;
        cout << mult << endl;
    }
    return 0;
}