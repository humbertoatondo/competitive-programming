#include <iostream>
#include <string.h>
using namespace std;

string s1;
string s2;
int t1, t2;

int main() {
    cin >> s1;
    cin >> s2;
    for (int i = 0; i < s1.length(); i++) {
        if (tolower(s1[i]) == tolower(s2[i])) continue;
        if (tolower(s1[i]) < tolower(s2[i])) {
            cout << "-1" << endl;
            return 0;
        }
        if (tolower(s1[i]) > tolower(s2[i])) {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}