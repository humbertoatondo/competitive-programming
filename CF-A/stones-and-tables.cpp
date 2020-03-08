#include <iostream>
#include <string>
using namespace std;

int n;
string s;
int c;
char b;

int main() {
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (b && s[i] == b ) c++;
        b = s[i];
    }
    cout << c << endl;
    return 0;
}