#include <iostream>
#include <string>
using namespace std;

int n;
string s;
int c;

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "++X" || s == "X++") c++;
        else c--;
    }
    cout << c << endl;
    return 0;
}