#include <iostream>
#include <string>
using namespace std;

int n, k;
string a;
int t;

int main() {
    cin >> n >> k;
    t = 0;
    while (n--) {
        cin >> a;
        int co = 0;
        for (char& c : a) {
            if (c == '7' || c == '4') co++;
        }
        if (co <= k) t++;
    }
    cout << t << endl;
    return 0;
}