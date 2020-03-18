#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
string str;
vector<string> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        v.push_back(str);
    }

    char x = v[0][0];
    char o = v[1][0];
    int i = 0;
    int j = n - 1;
    for (string s : v) {
        if (s[i] != x || s[j] != x || x == o) {
            cout << "NO" << endl;
            return 0;
        }
        for (int k = 0; k < n; k++) {
            if (i != k && j != k && s[k] != o) {
                cout << "NO" << endl;
                return 0;
            }
        }
        i++;
        j--;
    }

    cout << "YES" << endl;
    return 0;
}