#include <iostream>
#include <string>
using namespace std;

int n;
int ones, zeros;
string s;

int main() {
    cin >> n >> s;
    for (char& c : s) {
        if (c == '1') ones++;
        else zeros++;
    }
    int m = min(zeros, ones);
    cout << n - (m * 2) << endl;
    return 0;
}