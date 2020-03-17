#include <iostream>
#include <string>
using namespace std;

string s1, s2;

int main() {
    cin >> s1 >> s2;
    for (int i = 0, j = s2.length() - 1; i < s1.length(); i++, j--) {
        if (s1[i] != s2[j]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}