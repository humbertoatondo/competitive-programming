#include <iostream>
#include <string>
using namespace std;

int n, k;
string s;

int main() {
    cin  >> n>> k;
    int t = 0;
    while (n--) {
        cin >> s;
        for (char c : s) {
            if (c > '0' + k || s.length() <= k) {
                t--;
                break;
            }
        }
        t++;
    }
    cout << t << endl;
    return 0;
}